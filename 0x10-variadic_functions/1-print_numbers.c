#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - Used to print numbers
  * @separator: first operand
  * @n: second operand
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			printf("%d", va_arg(list, int));
			if ((i + 1) < n)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
			i++;
		}
	}
	va_end(list);
	printf("\n");
}
