#include <stdio.h>

/**
 * main - entry point
 *
 * Description: putchar prints a combination of two numbers
 *
 * Return: always 0
 */
int	main(void)
{
	int i,	j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
