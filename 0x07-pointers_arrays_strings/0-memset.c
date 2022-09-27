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

	i = 0;
	while(i < n)
	{
		/**
		 * reseting the values
		 * in the memory
		 */
		s[i] = b;
		i++;
	}
	return (s);
}
