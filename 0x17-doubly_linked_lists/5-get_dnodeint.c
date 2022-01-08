#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head; head = head->next, index--)
	{
		if (index == 0)
			return (head);
	}
	return (NULL);
}
