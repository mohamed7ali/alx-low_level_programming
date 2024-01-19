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
	printf("%d\n", (argc - 1));

	(void)argv;

	return (0);
}
