#include "main.h"
/**
 * print_square - To print nos
 * of sizes by size.
 * @size: First operand.
 * Return: Always an int.
 */
void print_square(int size)
{
	int i = 0, x;

	while (i < size && size > i)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
