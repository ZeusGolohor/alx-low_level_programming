#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * alloc_grid - returns a pointer to a two dimensional
  * arrays of integers
  * @width: first operand.
  * @height: second operand.
  * Return: int **
  */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **array;
	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		array[h] = malloc(sizeof(*array) * width);
		if (array[h] == NULL)
		{
			free(array[h]);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			array[h][w] = 0;
			w++;
		}
		h++;
	}
	return (array);
}
