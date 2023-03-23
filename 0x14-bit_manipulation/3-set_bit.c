#include "main.h"

/**
  * set_bit - Used to set the value of a bit to 1 at a given index.
  * @n: Decimal number to be converted to binary.
  * @index: Index of binary to set.
  * Return: int.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	long int i = 0;
	unsigned long int num = 0, new = *n;
	int added = 0;

	if (_pow_ulong_int(index, 2) == 0)
		return (0);
	while (num <= *n)
	{
		num = num + _pow_ulong_int(i, 2);
		i++;
	}
	--i;
	num = 0;
	while (i >= 0)
	{
		if ((num + _pow_ulong_int(i, 2)) <= new)
		{
			if (i == index)
				added = 1;
			num = num + _pow_ulong_int(i, 2);
		}
		--i;
	}
	if (added == 0)
		num = num + _pow_ulong_int(index, 2);
	*n = num;
	return (1);
}

/**
  * _pow_ulong_int - Used to get the result of a number.
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
