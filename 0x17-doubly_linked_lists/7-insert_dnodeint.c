#include "lists.h"
/**
 * *insert_dnodeint_at_index - adds a node at a given position
 * @h: double pointer
 * @idx: index
 * @n: data
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	size_t i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 1; i < idx ; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->prev = temp;
		new->next = temp->next;
		temp->next->prev = new;
		temp->next = new;

		return (new);
	}

}
