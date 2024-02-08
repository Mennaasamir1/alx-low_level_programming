#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary string
 * Return: NULL or decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		value = value * 2 + (*b++ - '0');
	}
	return (value);
}
