/**
 * free_grid - frees from memory 2-dimensional grid.
 * @grid: 2 multidimensional array.
 * @height: height of the grid.
 * 
 * Return: null.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
