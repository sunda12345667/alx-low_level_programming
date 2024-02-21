#include "lists.h"

/**
 * sum_listint - Returns sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The sum of all the data (n) in the linked list.
 * If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
