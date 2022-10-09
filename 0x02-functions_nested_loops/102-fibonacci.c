#include <stdio.h>

/**
  * main - Used to print the first Fibbonacci Numbers
  * Return: int
  */

int main(void)
{
	unsigned int i = 0, x = 1, y = 2, n = 0;

	printf("%d, ", x);
	printf("%d, ", y);
	while (i < 10)
	{
		n = 0;
		printf("%d, ", (x + y));
		n = x;
		x = y;
		y = n + y;
		i++;
	}
	printf("%s", "\n");
	return (0);
}
