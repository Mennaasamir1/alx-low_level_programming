#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the first node
 * @head: head pointer
 *
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!head)
	{
		return (0);
	}
	ptr = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = ptr;
	return (data);

}
