#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string base on
 * base on number.
 * @dest: first operand.
 * @src: second operand.
 * @n: third operand.
 * Return: void.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
