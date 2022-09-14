#include <ctype.h>
/**
 * _isalpha - checks for
 * all alphabetic character.
 * @c: First operand
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
