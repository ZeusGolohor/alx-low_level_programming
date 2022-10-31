#include "main.h"

/**
  * print_binary - Used to convert decimal to binary.
  * @n: unsigned long int
  * Return: void.
  */

void print_binary(unsigned long int n)
{
	unsigned int hi_pow = 0;
	long index;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else if (n > 1)
	{
		index = 0;
		while ((_pow(2, index)) < n || (_pow(2, index)) == n)
		{
			hi_pow = (_pow(2, index));
			index++;
		}
		_putchar('1');
		index = (index - 2);
		while (index > -1)
		{
			if ((hi_pow + _pow(2, index)) <= n)
			{
				hi_pow = (hi_pow + _pow(2, index));
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
			index = (index - 1);
		}
	}
}

/**
  * _pow - Multiplies a number by it's self n times.
  * @x: Unsigned int, the number.
  * @p: Unsigned int, the number of times.
  * Return: Unsigned int.
  */

unsigned int _pow(unsigned int x, unsigned int p)
{
	unsigned int n = 1, i;

	if (x == 0)
		return (0);

	i = 0;
	while (i < p)
	{
		n *= x;
		i++;
	}
	return (n);
}
