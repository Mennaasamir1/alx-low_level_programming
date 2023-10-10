#include "main.h"
#include <string.h>

/**
 * _checker - checks if a string is palindrome or
 * not recursively
 *
 * @s: string to check
 * @start: the starting index of the substring
 * @end: the ending index of the substring
 *
 * Return: 1 if the substring is palindrome, 0 otherwise.
 */
int _checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (_checker(s, start + 1, end - 1));
	}

	else
		return (0);
}

/**
 * is_palindrome - returns 1 if string is palindrome
 * and 0 if it is not
 * @s: pointer
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_checker(s, 0, len - 1));
}
