#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: astring used to separeate arguments.
 * @n: number of arguments passed.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (((i + 1) != n) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
