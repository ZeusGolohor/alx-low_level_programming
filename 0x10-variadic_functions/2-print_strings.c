#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
  * print_strings - Used to print strings from a varadic function
  * @separator: first operand.
  * @n: second operand.
  * Return: void.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			str = va_arg(list, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
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
