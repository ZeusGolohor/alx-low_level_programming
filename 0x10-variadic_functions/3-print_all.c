#include "variadic_functions.h"

/**
 * print_all - A  function that prints anything.
 * @format: format used in printing the arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				check_separator(format, i);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				check_separator(format, i);
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				check_separator(format, i);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str != NULL)
				{
					printf("%s", str);
					check_separator(format, i);
				}
				if (str == NULL)
				{
					printf("(nil)");
					check_separator(format, i);
				}
				break;
		}
		i++;
	}
	printf("\n");
}

/**
 * check_separator - A function used to check if output should be separated.
 * @format: format used in printing the arguments passed to the function.
 * @index: index at @format to check.
 *
 * Return: void.
 */
void check_separator(const char *format, int index)
{
	if (format[(index + 1)] != '\0')
		printf(", ");
}
