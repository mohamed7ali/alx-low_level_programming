#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: stores the number of command-line arguments passed to the program
 *
 * @argv: array of character pointers that
 * point to the command-line arguments
 *
 * Return: always 1
*/


int main(int argc, char **argv)
{
	int x = 0;
	int res = 0;
	char *y;

	if (argc == 1)
	{
		;
	}

	while (x++ != (argc - 1))
	{
		for (y = argv[x]; *y != '\0'; y++)
		{
			if (*y < '0' || *y > '9')
			{
			printf("Error\n");
			return (1);
			}
		}
		res = res + atoi(argv[x]);
	}
	printf("%d\n", res);
	return (0);
}
