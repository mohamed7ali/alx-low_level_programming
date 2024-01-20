#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 *
 * @s1: The first string to concat
 *
 * @s2: The second string to concat
 *
 * @n: number of chars from s2 will be concated
 *
 * Return: pointer to a newly allocated space in memory
 * contains the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nptr;
	unsigned int s1len, s2len, x;

	if (s1 != NULL)
	{
		s1len = strlen(s1) + 1;
	}

	if (s2 != NULL)
	{
		s2len = strlen(s2) + 1;
	}

	if (s2len <= n)
	{
		n = s2len;
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	nptr = malloc(s1len + n + 1);

	if (nptr == NULL)
	{
		free(nptr);
		return (NULL);
	}

	// Copy s1 characters directly, handling empty string case
    for (x = 0; x < s1len; x++) {
        nptr[x] = s1[x];
    }

    // Copy s2 characters, including '\0' terminator
    for (x = 0; x < n; x++) {
        nptr[x + s1len] = s2[x];
    }

	nptr[x] = '\0';

	return (nptr);
}
