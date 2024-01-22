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
 * str_concat - concatenates two strings
 *
 * @s1: The first string to concat
 *
 * @s2: The second string to concat
 *
 * Return: A pointer to allocated memory cantains the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0,
		len1 = get_len(s1),
		len2 = get_len(s2);
	char *ch;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	ch = malloc((len1 + len2 + 1));

	if (ch == NULL)
		return (NULL);

	if (s2 == NULL)
		len1 += 1;

	if (s1 != NULL)
	{
		for (; x < len1; x++)
			ch[x] = s1[x];
	}

	if (s2 != NULL)
	{
		for (; y <= len2; y++)
			ch[x++] = s2[y];
	}

	return (ch);
}
