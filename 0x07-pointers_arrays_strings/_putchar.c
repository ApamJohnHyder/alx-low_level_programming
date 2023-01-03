#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * Dc: The character to print
 *
 * Return: on success 1
 * on error, -1 is returned. and error is set approperately.
 */
int _putchar(char c)
{
	return (write(1, &c. 1))
}
