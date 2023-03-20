#include "main.h"

/**
  * print_binary - Used to convert a decimal to binary.
  * @n: unsigned long int
  * Return: void.
  */

void print_binary(unsigned long int n)
{
	unsigned long int counter = 1, *count = &counter, slot = 0;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else if (n > 1)
	{
		get_highest_index(n, count);
		while (*(count) > 1)
		{
			if ((slot + _pow_ulong(2, (*(count) - 2))) <= n)
			{
				_putchar('1');
				slot = ((slot + _pow_ulong(2, (*(count) - 2))));
			}
			else
			{
				_putchar('0');
			}
			*count = (*(count) - 1);
		}
	}
}

/**
  * get_highest_index - Used to get the highest index if a decimal in binary.
  * @n: unsigned long int
  * @count: ulong int*
  * Return: void.
  */

void get_highest_index(unsigned long int n, unsigned long int *count)
{
	if (n > 0)
	{
		*count = (*(count) + 1);
		get_highest_index((n >> 1), count);
	}
}

/**
  * _pow_ulong - Used to the result of a number raise to power of x.
  * @y: ulong int
  * @x: ulong int
  * Return: ulong int.
  */

unsigned long int _pow_ulong(unsigned long int y, unsigned long int x)
{
	unsigned long int n = 1, i;

	if (y == 0)
		return (0);

	i = 0;
	while (i < x)
	{
		n *= y;
		i++;
	}
	return (n);
}
