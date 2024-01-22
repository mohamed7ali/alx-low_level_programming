#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 *
 * @c: the charachter will be printed
 *
 * Return: return 1 when true, and -1 on errors
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
