#include "main.h"
#include <string.h>

/**
 * _strspn - used to get length
 * of a prefix string.
 * @s: first operand.
 * @accept: second operand.
 * Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
