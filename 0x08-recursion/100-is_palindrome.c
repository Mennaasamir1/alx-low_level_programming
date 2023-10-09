#include "main.h"
#include <string.h>
 /**
  * is_palindrome_rec - checks if a string is palindrome
  * @s: pointer to string
  * @start: param 1
  * @end: param 2
  * Return: 0
  */
int is_palindrome_rec(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* a string is empty or palindrome */
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_rec(s, start + 1, end - 1));
	}

	else
		return (0); /* string is not palindrome */
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

	return (is_palindrome_rec(s, 0, len - 1));
}
