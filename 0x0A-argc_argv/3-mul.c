#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: first operand.
  * @argv: second operand.
  * Return: int.
  */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 1)
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
