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
    int x = min;
    int count;

    if (min > max)
	return (NULL);

    for (x; x <= max; x++)
    {
        count += 1
    }

    int *concat;

    concat = malloc(count * sizeof(int))

    if (concat == NULL)
		return (NULL);

    for (x = min; x <= max; x++)
		concat[y++] = x;

    return (concat);

}
