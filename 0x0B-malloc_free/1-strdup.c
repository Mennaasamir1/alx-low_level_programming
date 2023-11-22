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
	int length, i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	ptr = (char *)malloc(length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);


}
