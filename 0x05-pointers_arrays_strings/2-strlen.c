#include "main.h"

/**
 * _strlen -> function to get the length of a string
 * @s: string pointer to pass to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int len;

		for (len = 0; s[len] != '\0'; len++);
	return (len);
}
