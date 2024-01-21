#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the content of the list
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	if (head == NULL)
	{
		return;
	}

	ptr = head;
	while (ptr)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
