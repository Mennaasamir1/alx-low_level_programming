#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - deletes a linked list (when head = null)
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (!head)
	{
		return;
	}

	ptr = *head;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;

}
