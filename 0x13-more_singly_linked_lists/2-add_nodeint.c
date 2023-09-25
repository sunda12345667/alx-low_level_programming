#include "lists.h"

/**
 * add_nodeint - adds a sun node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that sun node
 *
 * Return: pointer to the sun node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *sun;

	sun = malloc(sizeof(listint_t));
	if (!sun)
		return (NULL);

	sun->n = n;
	sun->next = *head;
	*head = sun;

	return (sun);
}
