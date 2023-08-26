#ifndef MAIN_H
#define MAIN_H
/* Header files */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/* Prototypes */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
