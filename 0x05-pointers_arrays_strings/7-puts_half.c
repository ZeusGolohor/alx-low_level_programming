#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints second
 * half a given string
 * @str: first operand
 * Return: void
 */

void puts_half(char *str)
{
	int strLen, n, i;

	strLen = strlen(str);
	n = strLen / 2;
	for (i = n; i <  strLen; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
