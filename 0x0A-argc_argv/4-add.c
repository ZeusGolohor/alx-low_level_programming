#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main - Program entry point.
 * @argc: total number of args passed to the program.
 * @argv: args passed to the program.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int i, x, count = 0;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		x = 0;
		while (argv[i][x] != '\0')
		{
			if (((argv[i][x] > 64) && (argv[i][x] > 91)) ||
			((argv[i][x] > 96) && (argv[i][x] < 123)))
			{
				printf("Error\n");
				return (1);
			}
			++x;
		}
		count = count + atoi(argv[i]);
	}
	if (argc != 1)
		printf("%d\n", count);
	return (0);
}
