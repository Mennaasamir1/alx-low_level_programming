#include "main.h"

/**
 * print_binary - prints the representation of binary number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int bts = sizeof(n) * 8, i = 0;

	while (bts)
	{
		if (n & 1L << --bts)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
	}

	if (!i)
	{
		_putchar('0');
	}

}
