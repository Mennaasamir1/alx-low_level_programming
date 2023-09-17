#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: always 0
 */

int	main(void)
{
	int	a	=	0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}

	a	=	'a';

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}






	return (0);
}
