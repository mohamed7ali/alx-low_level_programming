#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to calculate the factorial for.
 *
 * Return: fact of a num
 */
int factorial(int n)
{
	/* Base case: if n is negative, return -1 */
	if (n < 0)
	{
		return (-1);
	}
	/* Base case: factorial of 1 is 1 */
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
