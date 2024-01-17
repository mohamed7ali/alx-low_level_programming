#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Print the reverse of a string
 *
 * @s: The string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
