#include "function_pointers.h"

/**
  * int_index - to get the index of a search
  * @array: first operand.
  * @size: second oprand.
  * @cmp: third operand.
  * Return: int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(*(array + i)))
			return (i);
		i++;
	}
	return (-1);
}
