#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer to get bit value from.
 * @index: index of n to get bit from.
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	s = sizeof(n) * 8 - 1;

	if (index > s)
		return (-1);

	return ((n >> index) & 1);

}
