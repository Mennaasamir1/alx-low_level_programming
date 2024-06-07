#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a node at a given position
 * @h: double pointer to head
 * @idx: index
 * @n: data
 * Return: a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	size_t i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 1; i < idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
