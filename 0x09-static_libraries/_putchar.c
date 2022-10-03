#include "main.h"
#include <unistd.h>

/**
  * _putchar - _putchar
  * @c: first operand.
  * Return: Always an int.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
