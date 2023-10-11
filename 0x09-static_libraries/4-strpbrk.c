#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: pointer to substring
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n, j;

	char *pp;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j]  == s[n])
			{
				pp = &s[n];

				return (pp);
			}
		}

	}

	return (0);
}
