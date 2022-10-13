#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: first operand.
  * @f: second operand.
  * Return: void.
  */

void print_name(char *name, void (*f)(char *))
{
	if (*(name + 0) != '\0' || *(name + 0) != 0)
		f(name);
}
