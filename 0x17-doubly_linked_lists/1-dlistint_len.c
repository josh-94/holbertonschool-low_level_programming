#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: A constant variable of type list_t.
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nb_nodes = 0;

	for (; h; nb_nodes++)
		h = h->next;

	return (nb_nodes);
}
