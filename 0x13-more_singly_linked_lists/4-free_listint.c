#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the linked list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *ptr;

	if (head == NULL)
	{
		return;
	}

	ptr = head;
	while (ptr)
	{
		temp = ptr->next;
		/*free(ptr->n);*/
		free(ptr);
		ptr = temp;
	}
}
