#include <stdlib.h>

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
