#include "3-calc.h"

/**
 * main - program entry point.
 * @argc: numbers of arguments passed to the program.
 * @argv: a pointer to pointers of strings of arguments passed to the
 * program.
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int result;

	if ((argc == 0) || (argc != 4))
	{
		printf("Error\n");
		exit(98);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
