#include "lists.h"
#include <stddef.h>
/**
 *
 *
 */
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	int count = 0;
	while(node->next != NULL)
	{
		count++;
		node = node->next;
	}
		return (count);
}
