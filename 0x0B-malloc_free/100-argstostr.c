#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int len = 0, i, j, k;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;

			len++;
		}
	}

	s = (char *)malloc(sizeof(char) * (ac + len + 1));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
	}

	s[k] = '\0';

	return (s);
}
