#include "main.h"
#include <unistd.h>

/**
  * _putchar - _putchar
  * @c: first operand.
  * Return: Always an int.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * get_size - Used to get the size of a string.
 * @str: the string size to be gotten.
 *
 * Return: unsigned int.
 */
unsigned int get_size(char *str)
{
	unsigned int i, count = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		count = count + 1;
	return (count);
}
