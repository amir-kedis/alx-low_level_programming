#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* -------------------------------------------------------------- */
/* -------------------------- Headers --------------------------- */
/* -------------------------------------------------------------- */
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>

/* -------------------------------------------------------------- */
/* ------------------------- Prototype -------------------------- */
/* -------------------------------------------------------------- */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
