#include <stdio.h>

/**
  * main - Entry point
  * @argc: first operand.
  * @argv: second operand.
  * Return: int.
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
