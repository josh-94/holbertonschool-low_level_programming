#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: binary string
 *
 * Return: an  unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	unsigned int a;

	for (dec = 0, a = 0; b[a] != '\0'; a++)
	{
		if (b == NULL)
			return (0);
		if (b[a] == '1')
			dec = (dec << 1) | 1;
		else if (b[a] == '0')
			dec <<= 1;
		else if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	return (dec);
}
