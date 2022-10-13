#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: first operand.
  * @f: second operand.
  * Return: void.
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
