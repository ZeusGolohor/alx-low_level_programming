#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void sw(const char * const format, unsigned int i, unsigned int len, va_list list);
void iff(unsigned int i, unsigned int len);
#endif
