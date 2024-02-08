#include "main.h"
/**
 * flip_bits - counts flipped bits
 * @n: num 1
 * @m: num 2
 * Return: count of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total = 0;
	unsigned long int value = n ^ m;

	while (value)
	{
		if (value & 1uL)
		{
			total++;
		}
		value = value >> 1;
	}
	return (total);
}
