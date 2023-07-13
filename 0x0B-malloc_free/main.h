#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *create_array(unsigned int, char);
char *_strdup(char *);
unsigned int get_size(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void *_malloc(size_t);
void free_grid(int **, int);
char *argstostr(int, char **);
char **strtow(char *);
char **strtow(char *);
#endif
