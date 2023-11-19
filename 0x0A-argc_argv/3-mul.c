#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer to an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first, second;
	int mult;

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	if (argc == 3)
	{
		mult = first * second;

		printf("%d\n", mult);
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
