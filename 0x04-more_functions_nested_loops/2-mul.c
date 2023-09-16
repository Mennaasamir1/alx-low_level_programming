#include "main.h"
#include <stdio.h>

/**
* multiply - Multiplies two integers
* @a: The first integer
* @b: The second integer
*
* Return: The product of a and b
*/
int	multiply(int a, int b)
{
	int	product = 0;

	while (b > 0)
	{
		product += a;
		b--;
	}
	return (product);
}
