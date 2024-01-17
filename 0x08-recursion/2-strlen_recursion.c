#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length for.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: if the end of the string is reached */
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
