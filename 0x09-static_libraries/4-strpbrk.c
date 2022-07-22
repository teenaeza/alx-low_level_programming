#include "main.h"
/**
 * _strpbrk - searches
 * @s: search
 * @accept: set fof butes
 * Return: if a set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
