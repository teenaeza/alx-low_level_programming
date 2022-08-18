#include "main.h"
/**
 * get_bit - gets the value of a bit
 * @n: the bit
 * @index: the index to get the value
 * Return: -1 or a bit of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
