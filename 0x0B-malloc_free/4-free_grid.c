#include "holberton.h"
/**
 * free_grid - freed the memory of a bidimensional array
 * @grid: is the grid
 * @height: is the height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
