#include "lists.h"
#include <stddef.h>

/**
 * listint_len - counts the elements
 * @h: head pointer
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);

}
