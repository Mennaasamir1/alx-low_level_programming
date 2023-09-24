#include "main.h"

/**
 * print_line - function that prints the character '_'
 * @n: character to print
 * Return: nothing
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int	k;

		for (k = 1; k <= n; k++)
			_putchar('_');

		_putchar('\n');
	}
}
