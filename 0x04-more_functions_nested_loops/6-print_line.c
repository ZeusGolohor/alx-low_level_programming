#include "main.h"
/**
 * print_line - Used to
 * print lines.
 * @n: First operand
 * Return: Always an int.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		i = 0;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
