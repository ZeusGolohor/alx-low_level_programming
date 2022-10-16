#include "3-calc.h"

/**
  * main - Entry point
  * @argc: first operand.
  * @argv: second operand.
  * Return : int;
  */

int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc == 4)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[3]);
		printf("%d", (*get_op_func(argv[2]))(arg1, arg2));
	}
	printf("\n");
	return (0);
}
