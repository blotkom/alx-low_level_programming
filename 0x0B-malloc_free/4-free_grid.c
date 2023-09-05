#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function tha ints previously
 * created by your d function
 * @grid: An input 2tegers to free
 * @height: heig grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
