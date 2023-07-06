#include "main.h"

/**
 * _sqrt_recursion - A function that returns the natural square root of a
 * number.
 * @n: value.
 * Return: Void.
 */
int _sqrt_recursion(int n)
{
	int y = 1;

	if (n == 0)
		return (0);
	return (_sqrt_r(n, y));
}

/**
 * _sqrt_r - A function that returns the natural square root of a
 * number.
 * @n: value.
 * @y: Square root.
 * Return: Void.
 */
int _sqrt_r(int n, int y)
{
	if (y > n)
		return (-1);
	if (n == 1)
		return (1);
	if ((y * y) == n)
	{
		return (y);
	}
	else
	{
		return (_sqrt_r(n, (y + 1)));
	}
}
