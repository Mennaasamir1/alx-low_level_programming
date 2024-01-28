#include "main.h"
/**
 * clear_bit - sets the value of a bit to zero
 * @n: number
 * @index: index
 * Return: 1, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	if (*n & 1L << index)
	{
		*n ^= 1L << index;
	}
	return (1);
}
