#include "main.h"

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int	l;

	for(l = 1; l <= n; l++)
		{
			_putchar('\\');
		_putchar('\n');
		}
	}
}
