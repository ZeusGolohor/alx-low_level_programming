#include <ctype.h>
/**
 * _islower - to check for
 * lower case alphabets
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	} else {
		return (0);
	}
}
