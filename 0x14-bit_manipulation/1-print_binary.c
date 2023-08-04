#include "main.h"

/**
  * print_binary - Used to convert a decimal to
  * a binary number.
  * @n: The decimal number to be converted.
  * Return: void.
  */
void print_binary(unsigned long int n)
{
	unsigned long int num = 0;
	long int i = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (num < n)
		{
			num = num + _pow_ulong_int(i, 2);
			i++;
		}
		i--;
		_putchar('1');
		num = _pow_ulong_int(i, 2);
		i--;
		while (i >= 0)
		{
			if ((num + _pow_ulong_int(i, 2)) <= n)
			{
				num = num + _pow_ulong_int(i, 2);
				_putchar('1');
			}
			else
				_putchar('0');
			i--;
		}
	}
}

/**
  * _pow_ulong_int - Used to get the result of a number
  * multiplied by another number muiltiple times.
  * @times: number of times a number should be multiplied.
  * @num: The number to be multiplied.
  * Return: unsigned long int.
  */
unsigned long int _pow_ulong_int(long int times, unsigned long int num)
{
	unsigned long int b;
	long int i;

	b = 1;
	i = 0;
	while (i < times)
	{
		b = b * num;
		i++;
	}
	return (b);
}


