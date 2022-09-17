#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Entry point.
 * @size: Firat operand
 * Retuen: Always an int
 */
void print_triangle(int size)
{
	int i, x, y;

	i = 0;
	while (i < size && size > 0)
	{
		x = 1;
		while (x < (size - i))
		{
			_putchar(' ');
			x++;
		}
		y = i + 1;
		for (x = 0; x < y; x++)
		{
			_putchar('#');
		}
		i++;
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
