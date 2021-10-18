#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar (i);
		putchar (',');
		putchar (' ');
	}
	putchar (i);
	putchar('\n');
	return (0);
}
