#include "lists.h"
#include <stdlib.h>
/**
 * *get_nodeint_at_index -  returns the nth node
 *@head: head pointer
 *@index: index of node
 *
 * Return: a pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (index != 0)
	{
		ptr = ptr->next;
		index--;
	}

	return (ptr);

}

