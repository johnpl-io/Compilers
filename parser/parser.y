%debug
%define parse.error verbose
%{
    #define YYDEBUG 1
   #include <stdlib.h>
   #include <stdio.h>
   #include <ctype.h>
   #include "ast.h"
  int yylex();
  void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
  // typedef union yylval YYSTYPE;
%}
%union{
    char *string_literal;
    char charlit;
    struct Num {
        unsigned long long integer;
        long double fvalue;
        enum {
            INT_SIGNED,
            INT_LONG,
            INT_LONGLONG,
            INT_UNSIGNED,
            INT_ULONG,
            INT_ULONGLONG,
            FLOATV,
            DOUBLEV,
            DOUBLE_LONG,
        } type;
    } num;
    struct astnode *astnode_p;
}

%token <ident> IDENT <charlit> CHARLIT STRING <num.integer> NUMBER INDSEL PLUSPLUS MINUSMINUS SHL SHR LTEQ GTEQ EQEQ NOTEQ LOGAND LOGOR ELLIPSIS TIMESEQ DIVEQ MODEQ PLUSEQ MINUSEQ SHLEQ SHREQ ANDEQ OREQ XOREQ AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY
%token '!' '^' '&' '*' '-' '+' '=' '~' '|' '.' '<' '>' '/' '?' '(' ')' '[' ']' '{' '}' '%' ',' ';' ':'
%type <astnode_p> primary-expression 
%type <astnode_p> expression postfix-expression
// %left ','
// %right '=' PLUSEQ MINUSEQ TIMESEQ DIVEQ MODEQ SHLEQ SHREQ ANDEQ XOREQ OREQ
// %right '?' ':'
// %left LOGOR
// %left LOGAND
// %left '|'
// %left '^'
// %left '&'
// %left EQEQ NOTEQ
// %left '<' LTEQ '>' GTEQ
// %left SHL SHR
// %left '+' '-'
// %left '*' '/' '%'
// %left '!' '~' SIZEOF MINUSMINUS PLUSPLUS
// %left '.' INDSEL '(' ')' '[' ']'

%% /*RULES */

expression: assignment-expression { }
                    | expression ',' assignment-expression {  }
                    | expression ';' { }
                    ;

primary-expression: IDENT {  $$ = newIdent(AST_NODE_TYPE_IDENT, $1);}
                |   NUMBER { $$ = newNum(AST_NODE_TYPE_NUM, $1);
                            struct astnode *astnode_test = $$;
                             astwalk_impl(astnode_test, 0); }
                |   STRING { $$ = newIdent(AST_TYPE_STRING, $1);  }  
                | '(' expression ')'      { $$ = $2;  }
                ;

postfix-expression: primary-expression { $$ = $1; }
                |   postfix-expression '[' expression ']' {   }
                |   postfix-expression '.' IDENT { }
                |   postfix-expression INDSEL IDENT
                |   postfix-expression '(' expression-list ')' {}
                |   postfix-expression '(' ')' { }
                |   postfix-expression PLUSPLUS { }
                |   postfix-expression MINUSMINUS { } 
                ; // left out compound literals

expression-list: assignment-expression
                | expression-list ',' assignment-expression
                

cast-expression: unary-expression
                ;//add typename later

unary-expression: postfix-expression
                | PLUSPLUS   unary-expression
                | MINUSMINUS unary-expression
                | '-' cast-expression
                | '+' cast-expression { printf("hi"); }
                | '!' cast-expression 
                | '~' cast-expression
                | '&' cast-expression
                | '*' cast-expression
                | SIZEOF '(' expression ')'
                ;

mult-expression: cast-expression
                | mult-expression '*' cast-expression
                | mult-expression '/' cast-expression
                | mult-expression '%' cast-expression
                ;

add-expression: mult-expression {}
                | add-expression '+' mult-expression {fprintf(stderr, "hi");  }
                | add-expression '-' mult-expression
                ;

shift-expression: add-expression
                | shift-expression SHL add-expression
                | shift-expression SHR add-expression
                ;

relational-expression: shift-expression
                | relational-expression '<' shift-expression
                | relational-expression LTEQ shift-expression
                | relational-expression '>' shift-expression
                | relational-expression GTEQ shift-expression
                ;

equality-expression: relational-expression
                | equality-expression EQEQ relational-expression
                | equality-expression NOTEQ relational-expression
                ;

bitwise-or-expression: bitwise-xor-expression
                | bitwise-or-expression '|' bitwise-xor-expression
                ;

bitwise-xor-expression: bitwise-and-expression
                | bitwise-xor-expression '^' bitwise-and-expression
                ;

bitwise-and-expression: equality-expression
                | bitwise-and-expression '&' equality-expression
                ;

logical-or-expression:  logical-and-expression
                     |   logical-or-expression LOGOR logical-and-expression
                     ;
    
logical-and-expression: bitwise-or-expression
                     | logical-and-expression LOGAND bitwise-or-expression
                     ;
                     
conditional-expression: logical-or-expression
                        | logical-or-expression '?' expression ':' conditional-expression
                        ;

assignment-expression: conditional-expression
                        | unary-expression '=' assignment-expression
                        | unary-expression PLUSEQ assignment-expression
                        | unary-expression MINUSEQ assignment-expression
                        | unary-expression TIMESEQ assignment-expression
                        | unary-expression DIVEQ assignment-expression
                        | unary-expression MODEQ assignment-expression
                        | unary-expression SHLEQ assignment-expression
                        | unary-expression SHREQ assignment-expression  
                        | unary-expression ANDEQ assignment-expression
                        | unary-expression XOREQ assignment-expression
                        | unary-expression OREQ assignment-expression
                        ;


                        
                        
                    

%%       
    int main() {
        yydebug = 0;
        yyparse();
        return 1;
    }