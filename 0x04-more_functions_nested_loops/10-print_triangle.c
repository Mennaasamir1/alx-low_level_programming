#include "main.h"

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');

	else
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{	
			for (j = size - i; j >= i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}

