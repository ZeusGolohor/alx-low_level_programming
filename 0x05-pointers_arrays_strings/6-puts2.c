#include "main.h"
#include <string.h>
/**
 * puts2 - puts 2
 * @str: first operand
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
