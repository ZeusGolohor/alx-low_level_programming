#include "main.h"

/**
  * flip_bits - Used to return  the number of bits you would
  * need to flip to get from one number to another.
  * @n: Number to be converted to binary.
  * @m: Number to be converted to binary.
  * Return: unsigned int.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	long int i = 0, x = 0, flips = 0;
	unsigned long int numin = 0, numxm = 0;
	char *n_array;

	while (numin <= n)
	{
		numin = numin + _pow_ulong_int(i, 2);
		i++;
	}
	--i;
	n_array = malloc(sizeof(char) * (i + 1));
	if (n_array == NULL)
		return (-1);
	while (numxm <= m)
	{
		numxm = numxm + _pow_ulong_int(x, 2);
		x++;
	}
	--x;
	numin = 0;
	numxm = 0;
	while (i >= 0)
	{
		if ((numin + _pow_ulong_int(i, 2)) <= n)
		{
			numin = numin + _pow_ulong_int(i, 2);
			n_array[i] = 1;
			++flips;
		}
		else
			n_array[i] = 0;
		--i;
	}
	while (x >= 0)
	{
		if ((numxm + _pow_ulong_int(x, 2) <= m))
		{
			numxm = numxm + _pow_ulong_int(x, 2);
			if (x >= i)
			{
				if (n_array[x] != 1)
					++flips;
				else
					--flips;
			}
		}
		--x;
	}
	free(n_array);
	return (flips);
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

