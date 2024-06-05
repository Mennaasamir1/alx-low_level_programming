#include "lists.h"
/**
 * *add_dnodeint -  adds a new node at the beginning
 * @head: head pointer
 * @n: data
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

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
	temp->prev = NULL;
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (temp);

}
