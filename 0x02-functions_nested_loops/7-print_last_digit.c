#include "main.h"
/**
 * print_last_digit - prints
 * the last digit of a number.
 * @c: Firs operand
 * Return: Always an int.
 */
int print_last_digit(int c)
{
	int nv;

	if (c < 0)
		nv = -1 * (c % 10);
	else
		nv = c % 10;

	_putchar(nv + '0');
	return (nv);
}
