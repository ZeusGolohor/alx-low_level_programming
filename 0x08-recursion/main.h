#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
int _putchar(char);
void _puts_recursion(char *);
void _print_rev_recursion(char *);
int _strlen_recursion(char *);
void _str_len(char *, int **);
int factorial(int);
int _pow_recursion(int, int);
int _pow_r(int, int);
int _sqrt_recursion(int);
int _sqrt_r(int, int);
int is_prime_number(int);
int is_p(int, int, int **);
int is_palindrome(char *);
int is_pa(char *,char *, int **, int **);
int is_paR(char *);
int get_s_l(char *, int **);
int char_cmp(char, char);
int wildcmp(char *s1, char *s2);
#endif
