#include "main.h"

/**
 * _puts -> this is a function that puts
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	int i = 0;

		while (str[i])
	{
		_putchar(*str);
		i++;

	}

	_putchar('\n');
}
