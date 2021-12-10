#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: NULL for failure or 0/ neg height/ width.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int));
		if (array[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(array[b]);
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array);
}
