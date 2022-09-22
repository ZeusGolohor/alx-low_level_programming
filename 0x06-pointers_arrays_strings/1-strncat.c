#include "main.h"
#include <string.h>

/**
 * _strncat - Used to combine two
 * string based on a specific byte
 * @dest: first operand
 * @src: second operand
 * @n: third operand
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
