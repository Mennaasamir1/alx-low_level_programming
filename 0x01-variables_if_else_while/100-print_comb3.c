#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: putchar prints a combination of numbers
 *
 * Return: always 0
 */
int	main(void)
{
	int	i,	j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			if (i + j != 17)
			{
				putchar(' ');
				putchar(',');
			}
		}
	}

	return (0);
}
