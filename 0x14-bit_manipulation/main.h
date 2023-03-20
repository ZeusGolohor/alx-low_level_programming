#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
unsigned int binary_to_uint(const char *b);
char *_strdup(const char *s);
unsigned int bin_check(char s);
unsigned int _pow(unsigned int, unsigned int);
/**unsigned long int _pow_ulong(unsigned long int, unsigned long int);
unsigned long int _pow_ulong_uint(unsigned long int, unsigned int);*/
unsigned long int _pow_ulong_int(long int, unsigned long int);
void print_binary(unsigned long int n);
void get_highest_index(unsigned long int, unsigned long int *);
/** int _putchar(char c);*/
void _putchar(char);
int get_bit(unsigned long int n, unsigned int index);
void get_highest_index_ulong_uint(unsigned long int, unsigned int *);
unsigned int _pow(unsigned int, unsigned int);
#endif
