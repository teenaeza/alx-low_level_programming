#include "main.h"

/**
 * _strcmp - compares
 * @s1: a pointer
 * @s2: a pointer
 * Return: neg and pov diff
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
