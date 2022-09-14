#include <ctype.h>
#include "main.h"
/**
 * _islower - to check for
 * lower case alphabets
 * Description: character passed once
 * the function is called.
 * @c: First operand
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
