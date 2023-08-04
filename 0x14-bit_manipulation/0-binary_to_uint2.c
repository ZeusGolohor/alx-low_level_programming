#include "main.h"

/**
  * binary_to_uint - Used to convert a binary number to
  * an unsigned int.
  * @b: The binary to be converted.
  * Return: unsigned int.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin, i, len;

	i = 0;
	bin = 0;
	len = 0;
	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	while (i < len)
	{
		if ((b[len - (i + 1)] != 49) && (b[len - (i + 1)] != 48))
		{
			return (0);
		}
		if (b[len - (i + 1)] == 49)
		{
			bin = bin + _pow(i, 2);
		}
		i++;
	}
	return (bin);
}

/**
  * _pow -  Used to get a number raised to the
  * power of another number.
  * @times: Number of times a number should be multiplied.
  * @num: The number to be multipled.
  * Return: unsigned int.
  */
unsigned int _pow(unsigned int times, unsigned int num)
{
	unsigned int b, n;

	b = 1;
	n = 0;
	while (n < times)
	{
		b = b * num;
		n++;
	}
	return (b);
}
