#include "main.h"

/**
 * _puts_recursion - Used to print
 * to print a string.
 * @s: first operand.
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + 0));
	_puts_recursion(s + 1);
}
