#include "main.h"
#include <stddef.h>

/**
 * _strlen -> function to get the length of a string
 * @str: string pointer to pass to this function
 * Return: returns length of the string
 */
size_t  _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
