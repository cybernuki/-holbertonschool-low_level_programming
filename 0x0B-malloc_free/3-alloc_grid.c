#include "holberton.h"
/**
 * alloc_grid - Creates a grid and fill it with 0
 * @width: is the width of the grid
 * @height: is the height of the grid
 * Return: a pointer to the dinamic memory of the grid
 */
int **alloc_grid(int width, int height)
{
	if (width > 0 && height > 0)
	{
		int **grid = (int **) malloc(height * sizeof(int *));

		if (grid != NULL)
		{
			int i, j;

			for (i = 0; i < height; i++)
			{
				grid[i] = (int *) malloc(width * sizeof(int));

				for (j = 0; j < width; j++)
				{
					if (grid[i] != NULL)
					{
						grid[i][j] = 0;
					}
					else
						return (NULL);
				}
			}

			return (grid);
		}
		else
			return (NULL);
	}
	else
	{
		return (NULL);
	}
}
