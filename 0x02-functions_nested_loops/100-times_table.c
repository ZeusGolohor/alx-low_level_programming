#include "main.h"
#include <stdio.h>
/**
 * print_times_table - To print
 * times table
 * @n: First operand
 * Return: Always int
 */
void print_times_table(int n)
{
	int i, x, y;

	if (n < 15 && n > 0)
	{
		i = 0;
		while (i <= n)
		{
			x = 0;
			while (x <= n)
			{
				y = i * x;
				printf("%d", y);
				if (x != n)
				{
					if (y >= 0 && y  <= 9)
						printf("%s", ",   ");
					else if (y > 9 && y <= 99)
						printf("%s", ",  ");
					else if (y > 99 && y <= 999)
						printf("%s", ", ");
				}
				x++;
			}
			i++;
			if (i % n || i == n)
				_putchar('\n');
		}
	}
}
