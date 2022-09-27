#include "main.h"
#include <string.h>

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
	memset(s ,b ,n);
	return (s);
}
