#include <stdio.h>

/**
  * main - Used to print the sum of  all natural numbers below
  * a specific number that are multiples of 3 & 5
  * Return: int
  */

int main(void)
{
	unsigned int i, sum = 0;

	i = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
