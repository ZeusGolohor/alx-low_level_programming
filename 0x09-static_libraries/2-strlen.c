#include "main.h"

/**
  * _strlen - _strlen
  * @s: first operand
  * Return: Always an int
  */

int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}

