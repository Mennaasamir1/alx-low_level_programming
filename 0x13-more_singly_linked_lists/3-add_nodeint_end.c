#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - addsa a new node at the end
 * @head: head pointer
 * @n: data to be inserted
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
