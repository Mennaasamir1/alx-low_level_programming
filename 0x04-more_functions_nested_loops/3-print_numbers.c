#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int	k;

	for (k = 0; k <= 9; k++)
	{
		_putchar(k + '0');
		_putchar('\n');
	}

}
