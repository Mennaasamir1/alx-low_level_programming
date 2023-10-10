#include "main.h"
#include <string.h>
 /**
  * _checker - function that checks for palindrome
  * Description: function that checks if string
  * is palindrome recursively
  * @s: pointer to string
  * @start: starting point
  * @end: ending point
  *
  * Return: 1 if string is palindrome, 0 if otherwise
  */
int _checker(char *s, int start, int end)
{
	/* base case: empty string or single character is palindrome */
	if (start >= end)
	{
		return (1);
	}

	/* recursive case: checks if start and end characters match */
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
