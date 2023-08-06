#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: the number which bit is to be set.
 * @index: index of the bit to set.
 *
 * Return: int.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _n = *n, total = 0;
	int i = 0;

	while (total < _n)
	{
		total = total + _pow_lint(2, i);
		++i;
	}
	--i;
	total = 0;
	while (i >= 0)
	{
		if ((total + _pow_lint(2, i)) <= _n)
		{
			total = total + _pow_lint(2, i);
		}
		--i;
	}
	if (_pow_lint(2, index) <= total)
		total = total - _pow_lint(2, index);
	*n = total;
	if (_pow_lint(2, index) == 0)
		return (-1);
	return (1);
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
