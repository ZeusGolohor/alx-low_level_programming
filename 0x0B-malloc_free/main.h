#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
char *create_array(unsigned int, char);
char *_strdup(char *);
unsigned int get_size(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void *_malloc(size_t);
#endif
