#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - adds a node in the beginning
 * @head: ptr
 * @n: data
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);

}
