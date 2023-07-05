#include "main.h"

/**
 * _print_rev_recursion - Used to print the reverse of a string.
 * @s: Value to be printed.
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s + 0));
	}
}
