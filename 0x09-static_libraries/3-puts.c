#include "main.h"

/**
  * _puts - _puts
  * @s: first operand.
  * Return: void.
  */

void _puts(char *s)
{
int i = 0;
while (s[i])
{
	_putchar(s[i]);
	i++;
}
_putchar('\n');
}

