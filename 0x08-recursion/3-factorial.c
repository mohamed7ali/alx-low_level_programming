#include "main.h"
#include <stdio.h>

/**
 * int factorial(int n) - Returns the factorial of a number.
 * @n: The number to calculate the factorial for.
 *
 * Return: fact of a num
 */
int factorial(int n)
{
    if (n < 0)
    {
        return (-1);
    }
/* Base case: fact of 1 is 1 */
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
