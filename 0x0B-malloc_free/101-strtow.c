#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * word_count - counts substrings
 * @str: pointer to string
 * Return: word count
 */
int word_count(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] !=  ' ' && str[i + 1] != '\0')
				count++;
			else if (i == 0)
				count++;
		}
	}
	count++;
	return (count);
}
/**
 * **strtow -  splits a string into words
 * @str: pointer to string
 * Return: pointer or null
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = word_count(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(sizeof(char *) * n);
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(sizeof(char) * j);
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; j++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
