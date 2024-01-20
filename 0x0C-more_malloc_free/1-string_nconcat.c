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

    // Treat NULL pointers as empty strings
    s1 = s1 ? s1 : "";
    s2 = s2 ? s2 : "";

    s1len = strlen(s1);  // Calculate length without adding 1 for '\0' yet
    s2len = strlen(s2) + 1;  // Add 1 for '\0' only for s2

    if (s2len <= n) {
        n = s2len;
    }

    nptr = malloc(s1len + n);  // Allocate space without extra '\0' for s1

    if (nptr == NULL) {
        return NULL;
    }

    // Copy s1 characters directly, handling empty string case
    for (x = 0; x < s1len; x++) {
        nptr[x] = s1[x];
    }

    // Copy s2 characters, including '\0' terminator
    for (x = 0; x < n; x++) {
        nptr[x + s1len] = s2[x];
    }

    return nptr;
}
