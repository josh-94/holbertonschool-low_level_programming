#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: limits numbers characters to add
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int count = 0;
	int j = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[count] != '\0')
	{
		dest[c] = src[count];
		j++;

		if (j >= n)
			break;

		count++;
		c++;
	}

	return (dest);

}
