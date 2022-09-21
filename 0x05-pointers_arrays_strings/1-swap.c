#include "main.h"

/**
 * swap_int - switch two values
 * using there address
 * @a: first operand
 * @b: second operand
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int oldA, oldB;
	oldA = *a;
	oldB = *b;
	*a = oldB;
	*b = oldA;
}
