#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is return, and is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

vi 0-create_array.c
#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 *  it with a specific char.
 *  @c: char to initialize
 *  @size: number of bytes to allocate
 *
 *  Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
