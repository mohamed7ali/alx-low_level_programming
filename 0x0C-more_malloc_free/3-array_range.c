#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: The start number of the array
 *
 * @max: The end of the array
 *
 * Return: a pointer to the new allocated space
*/

int *array_range(int min, int max)
{
	int *ptr, x, y = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (x = min; x <= max; x++)
		ptr[y++] = x;

	return (ptr);
}
