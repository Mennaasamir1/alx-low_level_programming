#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of nums
 * @n: numbers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	while (i--)
	{
		sum += va_arg(args, int);
	}

	return (sum);
}
