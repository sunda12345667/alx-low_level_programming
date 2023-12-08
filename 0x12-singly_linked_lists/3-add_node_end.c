#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a add node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the add  node
 * Return: address of the add element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp = *head;
	unsigned int cat = 0;

	while (str[cat])
		cat++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = cat;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = add;

	return (add);
}
