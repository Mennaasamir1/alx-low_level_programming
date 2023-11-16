#include "main.h"

int is_checker(int, int);

/**
 * is_prime_number - returns a value to check if n is prime
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (is_checker(n, 2));
}

/**
 * is_checker - checks if a number is prime or not
 * @n: number
 * @i: divisor
 * Return: 1 or 0
 */

int is_checker(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	else if (n % 5 == 0)
	{
		return (0);
	}

	else if (i >= n / 2)
	{
		return (1);
	}

	else
	{
		return (is_checker(n, i + 1));
	}

	_putchar('\n');
	return (0);

}

