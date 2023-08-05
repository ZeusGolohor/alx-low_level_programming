#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: the number.
 * @index: the index of the bit to find.
 *
 * Return: int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int total = 0;
	long int i = 0;

	if (n == 0)
		return (0);
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		while (total < n)
		{
			total = total + _pow_lint(2, i);
			++i;
		}
		--i;
		total = 0;
		while (i >= 0)
		{
			if ((total + _pow_lint(2, i)) <= n)
			{
				total = total + _pow_lint(2, i);
				if (index == i)
				{
					return (1);
				}
			}
			else
			{
				if (index == i)
					return (0);
			}
			--i;
		}
	}
	return (-1);
}

/**
 * _pow_lint - A function to get the result of a number raised to the power of
 * another number.
 * @number: the number to be multiplied by @power times.
 * @power: the number of times to multiply a number by itself.
 *
 * Return: unsigned long int.
 */
unsigned long int _pow_lint(unsigned long int number, long int power)
{
	unsigned long int pow = 1;

	while (power > 0)
	{
		pow = number * pow;
		--power;
	}
	return (pow);
}
