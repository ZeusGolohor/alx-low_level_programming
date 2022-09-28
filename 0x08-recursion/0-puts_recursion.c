#include "main.h"

/**
 * _puts_recursion - Used to print
 * to print a string.
 * @s: first operand.
 * Return: void.
 */

void _puts_recursion(char *s)
{
	int i;
	
	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i++;
	_puts_recursion(s + i);
}
