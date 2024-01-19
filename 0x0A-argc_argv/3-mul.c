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
	if (argc <= 1)
	{
		printf("Error");

		return (1);
	}

	int result = argv[1] * argv[2];
}
