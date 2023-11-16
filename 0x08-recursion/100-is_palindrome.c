#include "main.h"
#include <string.h>

int is_checking(char *s, int left, int right);

/**
 * is_palindrome -  returns 1 if a string is a palindrome
 * @s: pointer to string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_checking(s, 0, len - 1));
}

/**
 * is_checking - checks if a string is a palindrome
 * @s: pointer
 * @left: left index
 * @right: right index
 * Return: 0 or 1
 */

int is_checking(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}

	else if (s[left] == s[right])
	{
		return (is_checking(s, left + 1, right - 1));
	}

	else
	{
		return (0);
	}

	return (0);

}

