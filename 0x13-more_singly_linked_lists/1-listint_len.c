#include "lists.h"
/**
 * listint_len - function that returns the
 * number of elements in a linked listint_t list.
 * @h: list to count.
 *
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *node = h;

	while (node != NULL)
	{	count++;
		node = node->next;
	}
	return (count);
}
