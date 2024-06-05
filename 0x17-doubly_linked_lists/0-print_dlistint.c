#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubly
 * linked list.
 * @h: head pointer of the list
 * Return: count of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return count;
}
