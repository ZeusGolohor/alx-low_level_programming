#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*)(int));
#endif
