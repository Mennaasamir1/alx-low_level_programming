#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: parameter
 * Return: 0;
 */
int _sqrt_recursion(int n)
{
		int root = sqrt(n);

		if (root * root == n)
		{
			return (root);
		}
		else if (root * root != n)
		{
			return (-1);
		}

	return (0);
}
