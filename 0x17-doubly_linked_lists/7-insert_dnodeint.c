#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer
 * @idx: index
 * @n: data
 * Return: a pointer to the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	size_t i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
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
	newp = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
