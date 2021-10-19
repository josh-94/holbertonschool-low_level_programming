#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: returns first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return (0);
}
