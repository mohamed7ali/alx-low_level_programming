#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point of the program
 *
 * @argc: The # of arguments
 *
 * @argv: Array of chars
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}


	else
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
	}

	return (0);
}
