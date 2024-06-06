#include "lists.h"
/**
 * free_dlistint - frees a linked lists
 * @head: head pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
