#include <unistd.h>

/**
  * _putchar - Used to write to the standard output.
  * Return: void.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
