#include "main.h"

/**
 * print_diagonal - function that prints diagonal
 * @n: the number of times the character should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int i, m;

		for (i = 0; i < n; i++)
		{
			for (m = 0; m <= i; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
