#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free 2-D array.
 * @grid: multidimensional array
 * @height: height of array.
 *
 * Return: no return
 */

void free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string to split
 *
 * Return: pointer of an array of strings
 */

char **strtow(char *str)
{
	char **x;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	x = malloc((height + 1) * sizeof(char *));
	if (x == NULL || height == 0)
	{
		free(x);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				x[i] = malloc((c - a1 + 2) * sizeof(char));
				if (x[i] == NULL)
				{
					free_grid(x, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			x[i][j] = str[a1];
		x[i][j] = '\0';
	}
	x[i] = NULL;
	return (x);
}
