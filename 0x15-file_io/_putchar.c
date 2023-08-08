#include "main.h"

/**
 * _putchar - A function to write to the standard out.
 * @c: character to be written to the standard output.
 *
 * Return: int.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
