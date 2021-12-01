#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to calculate substring length from.
 * @accept: string containing bytes to match.
 * Return: Number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, match = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				match = 1;
			}
		}
		if (!match)
			return (count);
		match = 0;
		s++;
	}
	return (count);
}
