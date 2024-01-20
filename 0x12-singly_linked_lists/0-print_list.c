#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strlenth - finds the length of the string
 * @p: pointer to string
 * Return: length
 */
int strlenth(char *p)
{
	int i = 0;

	if (!p)
		return (0);
	while (*p++)
	{
		i++;
	}
	return (i);
}
/**
 * print_list - prints elements of the list
 * @h: head pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", strlenth(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
