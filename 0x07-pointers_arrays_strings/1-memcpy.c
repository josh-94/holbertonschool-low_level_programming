#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: delimiter
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int size = 0;

	while (size < n)
	{
		dest[size] = src[size];
		size++;
	}
	return (dest);
}
