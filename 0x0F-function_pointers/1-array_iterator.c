#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a
 * parameter on each element of an array.
 * @array: array of integers to be passed to the pointer to a function.
 * @size: size of @array.
 * @action: a pointer to a function.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (size <= 0) || (action == NULL))
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
