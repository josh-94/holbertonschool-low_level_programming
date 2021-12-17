#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: binary string
 *
 * Return: an  unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	{
	unsigned int rest = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		rest += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (rest);
	}
}
