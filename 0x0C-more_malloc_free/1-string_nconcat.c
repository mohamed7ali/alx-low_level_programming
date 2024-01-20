#include <stdlib.h>
#include "main.h"

/**
 * get_len - gets the length of a string
 *
 * @s: The string input to calculate the length of
 *
 * Return: The length of a string
*/

int get_len(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (*s++ != '\0')
			len++;

		s -= (len + 1);
	}
	return (len);
}

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

	s1len = get_len(s1);
	s2len = get_len(s2);

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
