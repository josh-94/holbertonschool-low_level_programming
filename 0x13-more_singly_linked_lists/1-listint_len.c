#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list to print.
 *
 * Return: number of elements in the list.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *node = h;

	while (node != NULL)
	{	count++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (count);
}
