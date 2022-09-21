#include "main.h"
#include <string.h>

/**
 * print_rev - print a string
 * in reserve
 * @s: first operand
 * Return: void
 */

void print_rev(char *s)
{
	int strLen = strlen(s);
	int i;

	for (i = 0; i <= strLen; i++)
	{
		_putchar(*(s + (strLen - i)));
	}
	_putchar('\n');
}
