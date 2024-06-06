#include "lists.h"
/**
 * sum_dlistint - returns the sum of the data in the list
 * @head: head pointer
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);

}
