#include "main.h"

/**
 * factorial - prints the factorial of number
 * @n: value of number
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

	return (0);
}
