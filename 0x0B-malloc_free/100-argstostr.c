#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: conactenated string
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int j, l;
	int len = 0, ind = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		l = strlen(av[j]);
		len += l + 1;
	}

		p = malloc(len + 1);

		if (p == NULL)
			return (NULL);

	for (j = 0; j < ac; j++)
	{
		l = strlen(av[j]);
		strncpy(p + ind, av[j], l);
		ind += l;
		p[ind] = '\n';
		ind++;
	}

	p[ind] = '\0';
	return (p);
}
