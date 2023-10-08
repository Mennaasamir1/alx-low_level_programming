#include "main.h"

int test_num(int n, int num2);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: parameter
 * Return: 0
 */
int is_prime_number(int n)
{
	return (test_num(n, 2));
}

/**
 * test_num - checks if n is prime number
 * @n: param 1
 * @num2: param 2
 * Return: 0
 */

int test_num(int n, int num2)
{
	if (num2 >= n && n > 1)
	{
		return (1);  /* primal number */
	}

	else if (n % num2 == 0 || n <= 1) /* composite number */
	{
		return (0);
	}

	else
		return (test_num(n, num2 + 1));
}
