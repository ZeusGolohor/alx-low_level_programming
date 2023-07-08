#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point.
 * @argc: total number of args passed to the program.
 * @argv: args passed to the program.
 * Return: int.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x * y);
	return (0);
}
