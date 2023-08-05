#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: the number to be converted to binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0, total = 0;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		while (total < n)
		{
			total = total + _pow(2, i);
			++i;
		}
		total = 0;
		while (i > 0)
		{
			if ((total + _pow(2, (i - 1))) <= n)
			{
				total = total + _pow(2, (i - 1));
				_putchar('1');
			}
			else
				_putchar('0');
			--i;
		}
	}
}

/**
 * _pow - a function to get the results of a number raised to the power of
 * another number.
 * @number: the number used for multiplication.
 * @power: how many times to multiply @number by @number.
 *
 * Return: unsigned int.
 */
unsigned int _pow(unsigned int number, unsigned int power)
{
	unsigned int pow = 1;

	if (power == 0)
		return (1);
	while (power > 0)
	{
		pow = pow * number;
		--power;
	}
	return (pow);
}
