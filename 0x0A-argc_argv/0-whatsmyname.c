#include <stdio.h>

/**
 * main - is the main function
 *
 * @argc: The number of parameters including the program name
 *
 * @argv: An array of chars which contains the parameters
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
    (void)argc;

	printf("%s\n", argv[0]);

	return(0);
}
