#ifndef CODEGEN_H
#define CODEGEN_H

#include <stdlib.h>
#include <stdio.h>

#include "quads.h"
#include "sizeof.h"
#include "../ast.h"

extern char filename_buf[256];
extern struct basic_block *head_bb;

void code_generation(struct basic_block *head);
void translate_quad(struct quad *q);
char *checkGenericNode(struct generic_node *node);

#endif