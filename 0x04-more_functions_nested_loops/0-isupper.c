#include "main.h"
#include <ctype.h>
/**
 * _isupper - To check if a char
 * is in upCase or not.
 * @c: First operand.
 * Return: Alays an int.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
