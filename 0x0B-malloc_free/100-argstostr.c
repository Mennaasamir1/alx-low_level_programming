#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - conacatenates two strings
 * @ac: argument counter
 * @av: pointer to an array of pointers
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length++;
	}

	ptr = (char *)malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}

		ptr[k] = '\n';
		k++;
	}

	ptr[k] = '\0';

	return (ptr);

}
