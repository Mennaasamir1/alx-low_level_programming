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
	dlistint_t *temp = *h;
	dlistint_t *newp;
	size_t i;

	newp = malloc(sizeof(dlistint_t));
	if (newp == NULL)
		return (NULL);
	newp->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newp->prev = temp;
	newp->next = temp->next;
	temp->next->prev = newp;
	temp->next = newp;
	return (newp);
}
