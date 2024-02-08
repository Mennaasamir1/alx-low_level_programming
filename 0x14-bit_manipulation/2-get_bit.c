#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: num
 * @index: index of num
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
