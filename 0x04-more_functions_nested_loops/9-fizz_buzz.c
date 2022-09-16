#include <stdio.h>
/**
 * main - Entry point.
 * Return: Always 0.
 */
int main(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if ((number % 3) == 0 && (number % 5) == 0)
			printf("FizzBuzz");
		else if ((number % 5) == 0)
		       printf("Buzz");
		else if ((number % 3) == 0)
			printf("Fizz");
		else
			printf("%d", number);
		if (number != 100)
			printf(" ");
		number++;
	}
	printf("\n");
	return (0);
}
