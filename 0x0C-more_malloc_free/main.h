#ifndef MAIN_H
#define MAIN_H

/* ------ Includes ------ */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* ------ Prototypes ------ */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
