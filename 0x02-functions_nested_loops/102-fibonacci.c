#include <stdio.h>

/**
  * main - Used to print the first Fibbonacci Numbers
  * Return: int
  */

int main(void)
{
	unsigned int i = 0, x = 0, y = 1, max = 50, n;

	printf("%d, ", x);
	printf("%d, ", y);
	while (i <= max)
	{
		printf("%d",(x + y));
		n = x;
		x = y;
		y = n + x;
		if (i != max)
			printf("%s", ", ");
		i++;
	}
	printf("%s", "\n");
	return (0);
}
