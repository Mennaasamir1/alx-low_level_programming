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
	dlistint_t *ptr, *temp, *new;
	size_t i = 1;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	ptr = *h;
	while (i < idx)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		temp = ptr->next;
		ptr->next = new;
		temp->prev = new;
		new->next = temp;
		new->prev = ptr;
		return (*h);
	}


}
