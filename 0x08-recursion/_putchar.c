#include "main.h"

/**
 * _putchar - Used to print a signle character.
 * @c: Value to be printed.
 * Return: void.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
