#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an input
 * @a: array of int
 * @n: num of elements
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
