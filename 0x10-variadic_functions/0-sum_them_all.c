#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - Used to add all parameters
  * @n: first operand.
  * Return: int.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
