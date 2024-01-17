#include <stdio.h>
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
        return 0;
    }

    /* Recursive case: return 1 (for the current character) + length of the rest of the string */
    return 1 + _strlen_recursion(s + 1);
}
