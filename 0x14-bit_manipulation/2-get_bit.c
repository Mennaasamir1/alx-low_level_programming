#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: number
 * @index: index
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);	/* an error occured */
	}

	return (n >> index & 1);
}
