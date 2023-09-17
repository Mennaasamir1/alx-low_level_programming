#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: always 0
 */

int	main(void)
{
	int	x,	n;

	x	=	0;
	n	=	'a';

	while (x <= 10)
	{
		putchar(x + '0');
		x++;
	}

	while (n <= 'f')
	{
		putchar(n);
		n++;
	}

	return (0);
}
