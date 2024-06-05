#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in
 * a linked dlistint_t list.
 * @h: head pointer
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
