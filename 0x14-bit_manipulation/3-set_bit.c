#include "main.h"
/**
 * set_bit - sets a bit to 1
 * @n: num
 * @index: index
 * Return: -1 or value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
