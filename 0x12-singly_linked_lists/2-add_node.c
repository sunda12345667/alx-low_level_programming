#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * put node at the begining of a liked
 * double pointer to the list_t list
 * @str: add string to cat in the node
 *
 * Return: the address of the add element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int cat = 0;

	while (str[cat])
		cat++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->cat = cat;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
