#include "main.h"

/**
  * _memcpy - _memcpy
  * @dest: first operand.
  * @src: second operand.
  * @n: third operand.
  * Return: char
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}

