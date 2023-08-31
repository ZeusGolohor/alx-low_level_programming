#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned
 * int.
 * @b: a brinary string.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, total = 0;

	if (b == NULL)
		return (0);
	len = _bstrlen(b);
	if (len == 0)
		return (0);
	while (len > 0)
	{
		if (b[i] == '1')
			total = total + _pow(2, (len - 1));
		--len;
		++i;
	}
	return (total);
}

/**
 * _bstrlen - A function to get the highest index in a binary and
 * to check if a binary string contains only 0 & 1.
 * @b: the binary string.
 *
 * Return: unsigned int.
 */
unsigned int _bstrlen(const char *b)
{
	unsigned int i = 0;

	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		i++;
	}
	return (i);
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

