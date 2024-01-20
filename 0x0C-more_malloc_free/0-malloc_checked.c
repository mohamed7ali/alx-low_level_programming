#include <stdlib.h>
#include "main.h"


/**
* malloc_checked - allocates memory
*
* @b: Size of memory will be allocated
*
* Return: void
*/


void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
