#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: first operand.
  * @argv: second operand.
  * Return: int.
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		sum = sum + 1;
	}
	printf("%d\n", sum);
	return (0);
}
