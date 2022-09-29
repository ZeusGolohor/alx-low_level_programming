#include "main.h"

/**
 * factorial - Used to return the factorial
 * of a given number.
 * @n: first operand.
 * Return: Always an int.
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
