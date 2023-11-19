#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: pointer
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *d = needle;

		while (*one == *d && *d != '\0')
		{
			one++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}

	return (NULL);
}
