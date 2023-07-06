#include "main.h"

/**
 * factorial - Used to find the factorial of @n.
 * @n: value.
 * Return: Void.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
