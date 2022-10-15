#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>

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

	va_start(list, format);
	i = 0;
	if (format != NULL)
	{
		len = strlen(format);
		while (i < len)
		{
			sw(format, i, len, list);
			i++;
		}
	}
	printf("\n");
	va_end(list);
}

/**
  * sw - switch
  * @format: first operand
  * @i: second operand
  * @len: third operand
  * @list: forth operand
  * Return: void.
  */

void sw(const char * const format, unsigned int i,
		unsigned int len, va_list list)
{
	switch (*(format + i))
	{
		case 'c':
			printf("%c", va_arg(list, int));
			iff(i, len);
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			iff(i, len);
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			iff(i, len);
			break;
		case 's':
			printf("%s", va_arg(list, char *));
			iff(i, len);
			break;
	}
}

/**
  * iff - if statemeent check
  * @i: first operand
  * @len: second operand
  * Return: void
  */
void iff(unsigned int i, unsigned int len)
{
	if ((i + 1) < len)
		printf(", ");
}
