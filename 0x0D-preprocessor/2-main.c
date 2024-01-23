#include <stdio.h>

/**
 * main - A program prints the name of the file it was compiled from
 *
 * Return: always zero
*/

int main(void)
{

	printf("%s\n", __FILE__);

	return (0);
}
