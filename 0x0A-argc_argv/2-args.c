#include <stdio.h>


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
	x = 0;

	while(x != argc)
	{
		printf("%s\n", argv[x]);

		x += 1;
	}

	return (0);
}

