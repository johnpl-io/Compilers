#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "symbtab.h"

extern char filename_buf[255];
extern int lineno;
extern struct symbtab *current_scope;

// initialize new symbol table
struct symbtab *symbtab_init(int scope) {
    struct symbtab *table = calloc(1, sizeof(struct symbtab));
    table->scope = scope;
    return table;
}

// free memory used by symbol table
void symbtab_destroy(struct symbtab *table) {
    free(table);
}

// traverse through stack of scopes and each symbol in each scope for a match
struct symbol *symbtab_lookup(struct symbtab *table, struct symbol *symbol) {
    struct symbtab *cur_table = table;
    struct symbol *cur_sym = NULL;
    while (cur_table) {
        cur_sym = cur_table->head;
        // check matching symbol name and namespace
        while (cur_sym) {
            if (strcmp(cur_sym->name, symbol->name) == 0 && cur_sym->namespace == symbol->namespace) {
                return cur_sym;
            }
            cur_sym = cur_sym->next;
        }
        cur_table = cur_table->next;
    }
    return NULL;
}

// return true if installed successfully, return false if it's already there and we don't want to replace
bool symbtab_insert(struct symbtab *table, struct symbol *symbol, bool replace) {
    // check if symb exists within the table
    struct symbol *exists = symbtab_lookup(table, symbol);
    if (exists) {
        if (replace) {
            // replace the definition of the symbol
            symbol->next = exists->next;
            *exists = *symbol;
        } else {
            // don't replace the definition of the symbol
            return false;
        }
    } else {
        // symbol doesnt exist within table, install it
        // placing the new symbol at the head will help with future lookups supposedly
        symbol->next = table->head;
        table->head = symbol;
    }
    return true;
}

// initialize new table and push onto stack
struct symbtab *symbtab_push(int scope, struct symbtab *prev_symbtab) {
    struct symbtab *new_table = symbtab_init(scope);
    new_table->next = prev_symbtab;
    return new_table;
}

// change the current scope (new_symbtab already initialized)
struct symbtab *symbtab_insert_on(struct symbtab *current_symbtab, struct symbtab *new_symbtab) {
    new_symbtab->next = current_symbtab;
    return new_symbtab;
}

// pop current scope, free it, and prev scope becomes new current scope
struct symbtab *symbtab_pop(struct symbtab *current_scope) {
    struct symbtab *prev_scope = current_scope->next;
    struct symbtab *new_current_scope = NULL;
    if (prev_scope) {
        new_current_scope = prev_scope;
        symbtab_destroy(current_scope);
    }
    return new_current_scope;
}

// create a symbol table entry
struct symbol *create_symbol_entry(char *name, int type, int namespace){
    struct symbol *new_symb = calloc(sizeof(struct symbol), 1);
    new_symb->name = name;
    new_symb->attr_type = type;
    new_symb->namespace = namespace;
    new_symb->filename_buf = strdup(filename_buf);
    new_symb->lineno = lineno;
    return new_symb;
}

// define function attributes within function symb
void define_func(struct astnode *func, struct symbtab *table){
    if(table->scope != SCOPE_GLOBAL){
        fprintf(stderr, "Cannot define function outside of global scope");
    }
    // need to finish this after AST node for function is created. replace "temp" later
    struct symbol *symbol = create_symbol_entry("temp", SYMB_FUNCTION_NAME, NAMESPACE_ALT);
    symbol->fn.def_seen =  true;
    symbol->fn.is_inline = false; // inline is optional, not doing it
    symbol->fn.type = func;
    symbol->fn.stor_class = STG_EXTERN; // functions have storage class extern by default
    
    if(!symbtab_insert(table, symbol, false)){
        fprintf(stderr, "Function already exists");
    }
}

// define label. All we need to do is ensure we are in function scope and make sure no duplicate entry
void define_label(struct astnode *label, struct symbtab *table){
    while(table->scope != SCOPE_FUNCTION){
        table = table->next;
    }
    // do we have an astnode for label? figure out later
    struct symbol *symbol = create_symbol_entry("temp", SYMB_LABEL, NAMESPACE_LABEL);
    if(!symbtab_insert(table, symbol, false)){
        fprintf(stderr, "Label already exists");
    }
}

void print_symbtab(struct symbtab *table) {
    printf("Symbol Table:\n");
    printf("Scope: %d\n", table->scope);
    struct symbol *cur_sym = table->head;
    printf("Name     Attr Type Namespace Filename  Line Num\n");
    while (cur_sym) {
        printf("%s\t %d\t   %d\t     %s      %d\n", cur_sym->name, cur_sym->attr_type, cur_sym->namespace, cur_sym->filename_buf, cur_sym->lineno);
        cur_sym = cur_sym->next;
    }
}
