#include "3-calc.h"

/**
  * main - Entry point
  * @argc: first operand.
  * @argv: second operand.
  * Return: int;
  */

int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc == 4)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[3]);
		if ((*get_op_func(argv[2])) != NULL)
			if (strlen(argv[2]) == 1)
				printf("%d", (*get_op_func(argv[2]))(arg1, arg2));
			else
			{
				printf("Error\n");
				exit(99);
			}
		else
		{
			printf("Error\n");
			exit(99);
		}
		printf("\n");
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

