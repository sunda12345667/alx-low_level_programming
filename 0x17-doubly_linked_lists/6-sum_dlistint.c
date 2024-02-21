#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data in the list.
 * @head: The head of the list.
 *
 * Return: The sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
