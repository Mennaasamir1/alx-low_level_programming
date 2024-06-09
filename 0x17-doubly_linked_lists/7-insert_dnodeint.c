#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a node at a specific index
 * @h: double pointer to the head of the list
 * @idx: index
 * @n: data
 * Return: a pointer to the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		i = 1;
		temp = *h;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = temp->next;
						new->prev = temp;
						temp->next->prev = new;
						temp->next = new;
					}
				}
				break;
			}
			temp = temp->next;
			i++;
		}

	}
	return (new);
}
