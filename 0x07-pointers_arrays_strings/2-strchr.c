#include "main.h"

/**
 * _strchr - used to search for a
 * character in astring.
 * @s: first operand.
 * @c: second operand.
 * Return: char *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
