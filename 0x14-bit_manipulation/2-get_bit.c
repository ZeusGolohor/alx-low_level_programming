#include "main.h"

/**
  * get_bit - Used to get a bit at a given index.
  * @n: Decimal number to be converted to binary.
  * @index: index of the binary to find.
  * Return: Void.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 0;
/**	unsigned long int max = 4294967295;*/
	long int i = 0;

	if (_pow_ulong_int(index, 2) == 0)
			return (-1);

	if (n < 5000)
	{
		while (num <= n)
		{
			num = num + _pow_ulong_int(i, 2);
			i++;
		}
	}
	else
	{
		while (i <= index)
		{
			num = num + _pow_ulong_int(i, 2);
			i++;
		}
	}
	i--;
	num = 0;
	while (i >= 0)
	{
		if ((num + _pow_ulong_int(i, 2)) <= n)
		{
			num = num + _pow_ulong_int(i, 2);
			if (i == index)
				return (1);
		}
		--i;
	}
	return (0);
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
