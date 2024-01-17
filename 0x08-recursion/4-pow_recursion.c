#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the power of a number.
 *
 * @n: The number to calculate the power to.
 *
 * @m: The power
 *
 * Return: fact of a num
 */
int _pow_recursion(int x, int y);
{
	/* Base case: if y is negative, return -1 */
	if (y < 0)
	{
		return (-1);
	}
	/* Base case: power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	return (n * _pow_recursion(n, m - 1));
}
