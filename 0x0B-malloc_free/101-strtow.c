#include "main.h"
#include <string.h>
#include <stdlib.h>
int word_count(char *str);
/**
 * word_count - counts substrings
 * @str: pointer to string
 * Return: word count
 */
int word_count(char *str)
{
	int count = 0, i, len;
	int word_start = 0;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && !word_start)
		{
			word_start = 1;
			count++;
		}

		else if (str[i] == ' ')
		{
			word_start = 0;
		}
	}
	return (count);
}
/**
 * **strtow - split the string into words
 * @str: pointer to string
 * Return: pointer or NULL if fails
 */
char **strtow(char *str)
{
	int wordCount, i, j, k = 0;
	int word_length = 0, word_start = 0, len;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordCount = word_count(str);
	words = malloc(sizeof(char *) * (wordCount + 1));
	if (words == NULL)
		return (NULL);

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && !word_start)
		{
			word_start = 1;
			word_length = 1;
		}
		else if (str[i] != ' ')
			word_length++;
		if ((str[i] == ' ' || i == len - 1) && word_start)
		{
			words[k] = (char *)malloc(sizeof(char) * (word_length + 1));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[k], str + i  - word_length, word_length);
			words[k][word_length] = '\0';
			word_start = 0;
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}
