#include "main.h"
#include <ctype.h>
/**
 * _isdigit - To check if an
 * input is a digit.
 * @c: First operand
 * Return: Always n int
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
