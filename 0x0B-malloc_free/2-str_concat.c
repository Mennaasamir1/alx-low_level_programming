#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2, i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);

	ptr = (char *)malloc(sizeof(char) * (length1 + length2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		ptr[length1 + i] = s2[i];
	}

	return (ptr);

}
