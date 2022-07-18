#include "main.h"

/**
 * _memcpy - copies
 * @dest: pointer
 * @src: source
 * @n: number
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return(dest);
}
