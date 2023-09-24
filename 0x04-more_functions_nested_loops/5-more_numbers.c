#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14
 * Return: nothing
 */

void more_numbers(void)
{
	int k,	j;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
