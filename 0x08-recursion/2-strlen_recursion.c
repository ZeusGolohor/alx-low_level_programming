#include "main.h"

/**
 * _strlen_recursion - Used to get the length of a string.
 * @s: The string.
 * Return: Void.
 */
int _strlen_recursion(char *s)
{
	int **i, x = 0, *y;

	y = &x;
	i = &y;
	_str_len(s, i);
	return (**i);
}

/**
 * _str_len - Used to get the length of a string
 * using recursion.
 * @s: The string.
 * @i: The value used to keep rack of the length of the string.
 * return: Void.
 */
void _str_len(char *s, int **i)
{
	if (*s != '\0')
	{
		**i = **i + 1;
		_str_len((s + 1), i);
	}
}
