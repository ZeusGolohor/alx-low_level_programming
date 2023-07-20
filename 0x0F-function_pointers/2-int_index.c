#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: pointer to array of strings.
 * @size: size of @array.
 * @cmp: a pointer to a function.
 *
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp == NULL))
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
