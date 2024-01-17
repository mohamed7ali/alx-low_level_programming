#include "main.h"

/**
 * _sqrt - Gets the square root of the input
 *
 * @n: The number that function should return square root of
 *
 * @rt: The root value
 *
 * Return: The square root
*/

int _sqrt(int n, int rt)
{
	if (rt * rt == n)
		return (rt);

	else if (rt * rt < n)
	{
		return (_sqrt(n, ++rt));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: The number that function should return square root of
 *
 * Return: The squre root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
