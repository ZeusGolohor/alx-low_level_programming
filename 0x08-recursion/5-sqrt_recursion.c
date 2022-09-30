#include "main.h"

/**
 * _sqrt_recursion - returns the natural
 * square root of a number.
 * @n: first operand.
 * Return: Always an int.
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

/**
 * root - to find the natural root of
 * a number.
 * @n: first operand.
 * @i: second operand.
 * Return: Always an int
 */

int root(int n, int i)
{
	if (i >= n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (root(n, (++i)));
}
