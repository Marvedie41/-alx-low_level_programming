
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to array of integers
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(height * sizeof(int *));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(width * sizeof(int));
		if (x[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(x[i]);
			free(x);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			x[i][j] = 0;

	return (x);
}
