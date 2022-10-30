#include "main.h"

/**
  * print_binary - Used to convert decimal to binary.
  * @n: unsigned long int
  * Return: void.
  */

void print_binary(unsigned long int n)
{
	unsigned int hi_pow = 0;
	int index;

	if (n == 0)
		printf("%d", 0);
	else if (n == 1)
		printf("%d", 1);
	if (n > 1)
	{
		index = 0;
		while ((_pow(2, index)) < n)
		{
			hi_pow = (_pow(2, index));
			index++;
		}
		printf("%d", 1);
		index = (index - 2);
		/**printf("%d, %d\n", hi_pow, index);
		if (index >= 0)
			printf("yes");
		else
			printf("no");*/
		while (index >= 0)
		{
			if ((hi_pow + _pow(2, index)) <= n)
			{
				hi_pow = (hi_pow + _pow(2, index));
				printf("%d", 1);
			}
			else
			{
				printf("%d", 0);
			}
			index = (index - 1);
		}
	}
}

/**
  * _pow - Multiplies a number by it's self n times.
  * @x: Unsigned int, the number.
  * @p: Unsigned int, the number of times.
  * Return: Unsigned int.
  */

unsigned int _pow(unsigned int x, unsigned int p)
{
	unsigned int n = 1, i;

	if (x == 0)
		return (0);

	i = 0;
	while (i < p)
	{
		n *= x;
		i++;
	}
	return (n);
}
