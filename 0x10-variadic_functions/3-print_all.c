#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - to print all formats
  * @format: first operand
  * Return: void.
  */

void print_all(const char * const format, ...)
{
	unsigned int len;
	unsigned int i;
	va_list list;

	len = strlen(format);
	va_start(list, format);
	i = 0;
	if (len > 0)
	{
		while (i < len)
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 'i':
					printf("%i", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					break;
				case 's':
					printf("%s", va_arg(list, char *));
					break;
			}
			if ((i + 1) < len)
				printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
