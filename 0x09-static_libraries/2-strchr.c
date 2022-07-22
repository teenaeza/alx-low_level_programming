#include "main.h"
/**
 * *_strchr - locates a cahr
 * @s: searched string
 * @c: character to be located
 * Return: if c is found - a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
