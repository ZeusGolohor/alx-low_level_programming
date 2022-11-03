#include "main.h"

/**
  * _putchar - Used to write to the stdout.
  * @c: char
  * Return: int.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
