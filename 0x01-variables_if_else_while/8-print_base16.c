#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: always 0
 */

int	main(void)
{
	int	num	=	48;

	while (num <= 102)
	{
		putchar(num);

		if (num == 57)
			num += 39;


		num++;
	}

	putchar('\n');

	return (0);
}
