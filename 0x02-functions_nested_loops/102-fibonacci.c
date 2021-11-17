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
	c = a + b;
	printf("%ld,%ld", a, b);

	for (i = 0; i < 48; i++)
	{
		printf(", %ld", c);
		a = b;
		b = c;
		c = a + b;
	}


	return (0);
}
