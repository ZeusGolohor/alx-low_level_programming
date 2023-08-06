#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
unsigned int binary_to_uint(const char *);
unsigned int _bstrlen(const char *);
unsigned int _pow(unsigned int, unsigned int);
unsigned long int _pow_lint(unsigned long int, long int);
void print_binary(unsigned long int);
int _putchar(char);
int get_bit(unsigned long int, unsigned int);
unsigned int flip_bits(unsigned long int, unsigned long int);
#endif
