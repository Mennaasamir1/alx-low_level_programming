#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *add_node - adds a new node
 * @head: pointer to head pointer
 * @str: pointer to string
 * Return: pointer to new node, or NULL on fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	char *s = strdup(str);

	ptr->str = s;
	ptr->next = NULL;

	if (ptr != NULL)
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);

}
