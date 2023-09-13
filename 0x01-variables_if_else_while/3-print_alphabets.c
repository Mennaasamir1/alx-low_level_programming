#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: putcar prints out the alphabets to the console
 *
 * Return: always 0
 */

int	main(void)
{
	char	small,	capital;

	for (small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}

	for (capital = 'A'; capital <= 'Z'; capital++)
	{
		putchar(capital);
	}

	putchar('\n');
	return (0);
}
