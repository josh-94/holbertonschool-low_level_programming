#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @str: String given
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i;
	char c[] = {'a', 'e', 'o', 't', 'l'};
	char n [] = {4, 3, 0, 7, 1};
	char *r = str;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == c[i] || *str == c[i] - 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (r);
}
