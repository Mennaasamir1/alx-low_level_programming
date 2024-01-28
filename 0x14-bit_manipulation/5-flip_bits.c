#include "main.h"
/**
 * flip_bits - counts flipped bits
 * @n: number 1
 * @m: number 2
 * Return: count of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total = 0;
	unsigned int value = n ^ m;

	while (value)
	{
		if (value & 1ul)
		{
			total++;
		}
		value = value >> 1;
	}
	return (total);

}
