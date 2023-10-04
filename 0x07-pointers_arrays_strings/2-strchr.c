#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in string
 * @s: pointer to string
 * @c: the character to be located
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}

	return ('\0');
}
