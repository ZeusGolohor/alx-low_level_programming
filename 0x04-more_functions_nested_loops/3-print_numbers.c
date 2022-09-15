#include "main.h"
/**
 * print_numbers - To print nos 8
 * to 9.
 * Return: Void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
