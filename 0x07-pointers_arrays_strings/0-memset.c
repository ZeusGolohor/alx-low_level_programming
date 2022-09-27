#include "main.h"

/**
 * _memset - used to fill memory
 * with a contant type.
 * @s: first operand.
 * @b: second operand.
 * @n: third operand.
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
