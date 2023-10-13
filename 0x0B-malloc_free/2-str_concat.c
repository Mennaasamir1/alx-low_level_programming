#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, count1 = 0, count2 = 0;
	char *sr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		count2++;
	}

	sr = malloc(sizeof(char) * (count1 + count2) + 1);

	if (sr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		sr[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		sr[count1 + i] = s2[i];
	}

	return (sr);
}
