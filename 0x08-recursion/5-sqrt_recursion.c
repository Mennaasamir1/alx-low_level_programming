#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: parameter
 * Return: 0;
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if ((n == 0 || n == 1))
	{
		return (n);
	}

	else
	{
		return (_sqrt_two(n, 1));
	}

	return (0);
}

/**
 * _sqrt_two - find the squre root
 * @n: parameter 1
 * @root: parameter 2
 * Return: 0
 */

int _sqrt_two(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}

	else if (root * root > n)
	{
		return (-1);
	}

	else
	{
		return (_sqrt_two(n, root + 1));
	}

	return (0);
}
