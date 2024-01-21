#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints the list elements
 * @h: head pointer
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_of_nodes++;
	}
	return (count_of_nodes);

}
