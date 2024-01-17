#include "main.h"

/**
 * primetst - function returns 1 if the input integer is a prime number
 * otherwise return 0.
 *
 * @n: The number that function should return square root of
 *
 * @tst: the number will be divided by
 *
 * Return: The squre root
*/

int primetst(int n, int tst)
{
	if (n == 1 || ((n % tst == 0) && (n != tst) && (tst != 1)))
		return (0);

	else if (n < 0)
		return (0);

	else if (tst > 1)
		primetst(n, --tst);

	return (1);
}

/**
 * is_prime_number - function returns 1 if the input integer is a prime number
 * otherwise return 0
 *
 * @n: The number will be checked
 *
 * Return: 1 if prime or 0 if not
*/

int is_prime_number(int n)
{
	return (primetst(n, (n / 2)));
}
