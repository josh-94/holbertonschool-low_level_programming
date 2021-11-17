#include <stdio.h>
/**
 * main - rints the first 50 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int a, b, c;

	a = 1;
	b = 2;
	c = a + b;
	printf("%i,%i", a, b);

	for (i = 0; i < 48; i++)
	{
		printf(", %i", c);
		a = b;
		b = c;
		c = a + b;
	}


	return (0);
}
