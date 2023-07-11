#include <stdlib.h>
/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 * Return: ...
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[1]);
	}
	free(grid);
}
