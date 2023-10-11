
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j,  sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *number = argv[i];

		for (j = 0; number[j] != '\0'; j++)
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(number);
	}

	printf("%d\n", sum);
	return (0);
}
