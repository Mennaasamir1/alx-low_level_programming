#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the main function of the program
 *
 * Description: the main function prints a number to the console.
 *
 * Return: always 0
 */

int	main(void)
{
	int	n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	if (n < 0)
	{
		printf("is negative");
	}
		printf("%d", n);
	return (0);
}
