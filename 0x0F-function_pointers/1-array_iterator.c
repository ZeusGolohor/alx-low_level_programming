#include "function_pointers.h"

/**
  * array_iterator - calls a function on every element of
  * an array
  * @array: first operand
  * @size: second operand.
  * @action: third operand.
  * Return: void.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
