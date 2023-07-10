#include "main.h"
#include <stdlib.h>

/**
  * free_grid - ...
  * @grid:grid to be freed
  * @height:grid dimension
  *
  * Return: result
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
