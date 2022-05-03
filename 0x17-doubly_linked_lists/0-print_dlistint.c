#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements
 * of a dlistint_t list.
 * @h: A constant variable of type list_t.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb_nodes = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		nb_nodes++;
	}
	return (nb_nodes);
}
