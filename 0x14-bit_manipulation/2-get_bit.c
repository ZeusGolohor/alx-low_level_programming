#include "main.h"

/**
  * get_bit - Used to get the value of a bit at a given index.
  * @n: unsigned long int.
  * @index: unsigned int.
  * Return: int.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 1, *count = &counter;
	unsigned long int slot = 0;

	get_highest_index_ulong_uint(n, count);
	while (*(count) >= 1)
	{
		if ((slot + _pow_ulong_unit(n, (*(count) - 1))) <= n)
		{
			if (index == (*(count) - 1))
				return (1);
			slot = (slot + _pow_ulong_unit(n, (*(count) - 1)));
		}
		else
		{
			if (index == (*(count) - 1))
				return (0);
		}
		*count = (*(count) - 1);
	}
	return (-1);
}

/**
  * get_highest_index_ulong_uint - used to get the highest index of a decimal.
  * @n: unsigned long int.
  * @count: unsigned int.
  * Return: void.
  */

void get_highest_index_ulong_uint(unsigned long int n, unsigned int *count)
{
	if (n > 0)
	{
		*count = (*(count) + 1);
		get_highest_index_ulong_uint((n >> 1), count);
	}
}

/**
  * _pow_ulong_unit - Used to get the result of a number raise to the power of
  * x.
  * @y: unsigned long int.
  * @x: unit.
  * Return: ulong.
  */

unsigned long int _pow_ulong_unit(unsigned long int y, unsigned int x)
{
	unsigned long int n = 1;
	unsigned int i;

	i = 0;
	while (i < x)
	{
		n *= y;
		i++;
	}
	return (n);
}
