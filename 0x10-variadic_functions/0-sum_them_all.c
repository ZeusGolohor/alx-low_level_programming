#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: number of arguments passed to the function.
 *
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int total = 0, i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		total = total + va_arg(ap, unsigned int);
	}
	return (total);
}
