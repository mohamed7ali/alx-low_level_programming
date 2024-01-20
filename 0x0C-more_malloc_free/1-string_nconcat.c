#include <stdio.h>
#include <string.h>
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

	s1len = strlen(s1);
	s2len = strlen(s2);

	if (s2len < n)
		n = s2len;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	nptr = malloc(s1len + n + 1);

	if (nptr == NULL)
	{
		free(nptr);
		return (NULL);
	}

	for (x = 0; x < (s1len + n); x++)
	{
		if (x < s1len && s1 != NULL)
			nptr[x] = s1[x];
		else if (s2 != NULL)
			nptr[x] = s2[x - s1len];
	}
	nptr[x] = '\0';

	return (nptr);
}
