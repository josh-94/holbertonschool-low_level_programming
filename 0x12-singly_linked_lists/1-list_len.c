#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: A constant variable of type list_t.
 *
 * Return: The number of nodes (i).
 *
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}
		return (count);
}
