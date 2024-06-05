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
	
	if (temp != NULL)
	{
		temp->prev = NULL;
		temp->n = n;
		temp->next = NULL;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	else
	{
		return (NULL);
	}

}
