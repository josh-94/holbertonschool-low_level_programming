#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	signed long int s;
	char ch;
	int f;

	s = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	f = 0;

	while (s >= 0)
	{
		ch = (n >> s) & 1;

		if (f == 1)
			putchar(ch + '0');
		else
		{
			if (ch == 1)
			{
				putchar(ch + '0');
				f = 1;
			}
		}

		s -= 1;
	}
}
