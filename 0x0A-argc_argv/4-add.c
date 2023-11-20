#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
