#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: The width of 2d array
 *
 * @height: The height of 2d array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));

		if (arr == NULL)
			return (NULL);

	for (y = 0; y < height; y++)
	{
		arr[y] = malloc(sizeof(int) * width);
		if (arr[y] == NULL)
		{
			while (y--)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
	}
	for (x = 0; x < (height); x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}

	return (arr);
}
