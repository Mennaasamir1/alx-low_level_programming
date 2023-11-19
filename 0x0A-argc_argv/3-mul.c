#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument c
 * @argv: argument v
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mult, first, second;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	for (i = first; i < argc; i++)
	{
		mult = first * second;
	}

	printf("%d\n", mult);

	return (0);
}
