#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculates the number of elements
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);

}
