#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
unsigned int get_size(char *);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);
void _print(char *);
int _putchar(char);
#endif
