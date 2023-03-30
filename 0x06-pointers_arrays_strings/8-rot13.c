#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *hi)
{
	int index, count;

	char decoded[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; hi[index] != '\0'; ++index)
	{
		for (count = 0; decoded[count] != '\0' ; count++)
		{
			if (hi[index] == decoded[count])
			{
				hi[index] = encoded[count];
				break;
			}
		}
	}
	hi[index] = '\0';
	return (hi);
}
