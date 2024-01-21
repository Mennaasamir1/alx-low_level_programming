#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - adds a node at the end of the list
 * @head: double pointer to head
 * @str: pointer to string
 *
 * Return: pointr or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	char *s = strdup(str);

	ptr = malloc(sizeof(list_t));
	ptr->str = s;
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
