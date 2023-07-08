#include <stdio.h>

/**
 * main - Program entry point.
 * @argc: total number of args passed to the program.
 * @argv: args passed to the program.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
