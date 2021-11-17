#include <stdio.h>
/**
 * main - rints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long i;
	unsigned long a, b, c;

	a = 1;
	b = 2;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		c = a + b;
	}


	return (0);
}
