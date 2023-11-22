#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	int length;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	ptr = (char *)malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	ptr = strdup(str);


	return (ptr);
	free(ptr);
	ptr = NULL;


}
