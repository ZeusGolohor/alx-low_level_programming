#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalize a string base
 * on some given parameters
 * @s: first operand.
 * Return: char *
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case 32: /** space */
			case 9: /** tab */
			case 10: /** new line */
			case 44: /** ',' */
			case 59: /** ';' */
			case 46: /** '.' */
			case 33: /** '!' */
			case 63: /** '?' */
			case 34: /** '"' */
			case 40: /** '(' */
			case 41: /** ')' */
			case 123: /** '{' */
			case 125: /*+ '}' */
				s[i + 1] = toupper(s[i + 1]);
				break;
		}
	}
	return (s);
}
