
#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of square
 * Return: nothing
 */
void print_square(int size)
{
	if (size <=  0)
	{
		_putchar('\n');
	}

	else
	{
		int	j, i;

		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');
		_putchar('\n');
		}
	}
}
