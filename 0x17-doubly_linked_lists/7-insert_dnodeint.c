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
	size_t i = 0;
	unsigned int index = idx - 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	ptr = *h;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	temp = ptr->next;
	ptr->next = new;
	temp->prev = new;
	new->next = temp;
	new->prev = ptr;

	return (*h);


}
