#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: the number which bit is to be set.
 * @index: index of the bit to set.
 *
 * Return: int.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _n = *n;
	unsigned int total = 0;
	int i = 0;

	while (total < _n)
	{
		total = total + _pow(2, i);
	/**	printf("%d: %d: %d\n", _pow(2, i), total, i);*/
		++i;
	}
	--i;
	total = 0;
	while (i >= 0)
	{
		if ((total + _pow(2, i)) <= _n)
		{
			total = total + _pow(2, i);
		}
		--i;
	}
	total = total + _pow(2, index);
	*n = total;
	return (1);
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
