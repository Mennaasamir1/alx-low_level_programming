#include <stdio.h>

/**
 * main - entry point
 *
 * Description: putchar prints numbers of base 10
 *
 * Return: always 0
 */
int	main(void)
{
	int	n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
