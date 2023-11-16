#include "main.h"
/**
 * _sqrt_recursion - calculates
 * @n: number;
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (squrt(n, 1));
}

/**
 * squrt - calculates the square root
 * @n: number
 * @num: number given
 * Return: square root
 */
int squrt(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}

	else if (num * num < n)
	{
		return (squrt(n, num + 1));
	}

	else
	{
		return (-1);
	}

}
