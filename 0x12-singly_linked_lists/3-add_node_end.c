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
	list_t *head_temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str =  strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		head_temp = *head;
		while (head_temp->next != NULL
				{
				head_temp = head_temp->next;
				}
				head_temp->next = new_node;
				}
				return (*head)
				}
