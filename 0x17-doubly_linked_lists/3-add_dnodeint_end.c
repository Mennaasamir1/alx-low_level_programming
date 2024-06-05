#include "lists.h"
/**
 * *add_dnodeint_end - adds a node at the end of the list
 * @head: double pointer to head
 * @n: data
 * Return: a pointer to the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;

	ptr = *head;
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;

	if (!*head)
	{
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;

	return (*head);

}
