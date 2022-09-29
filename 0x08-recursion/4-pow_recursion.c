#include "main.h"

/**
 * _pow_recursion - returns the value of
 * x rasied to the power of y.
 * @x: first operand.
 * @y: second operand.
 * Return: Always an int.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
