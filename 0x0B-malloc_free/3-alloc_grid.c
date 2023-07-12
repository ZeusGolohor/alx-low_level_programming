#include "main.h"

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: int **.
 */
int **alloc_grid(int width, int height)
{
	int **main_grid;
	int i;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	main_grid = _malloc(sizeof(int *) * height);
	if (main_grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		main_grid[i] = _malloc(sizeof(int) * width);
		if (main_grid[i] == NULL)
			return (NULL);
	}
	return (main_grid);
}

/**
 * _malloc - Used to allocate memory to a variable.
 * @size: the size of the memory to be allocated.
 *
 * Return: void *.
 */
void *_malloc(size_t size)
{
	void *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
