#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to integer.
 * @index: index to set to 1.
 *
 * Return: 1 if succeeded of -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;
	unsigned long int m;

	s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);

	m = 1 << index;

	*n = m | *n;

	return (1);
}
