#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @str: Variable type string.
 * @head: Double pointer to null.
 *
 * Return: The adrress of the new element.
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str =  strdup(str);
	new_node->len = strlen(str);
	ne
	*head = new_node;

	return (*head);
}
