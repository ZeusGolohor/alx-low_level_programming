#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: string to be printed by a function pointer.
 * @f: a function pointer.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	(*f)(name);
}
