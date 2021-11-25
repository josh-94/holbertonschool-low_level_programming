#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: Number given to start counting.
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%i\n", n);
	}

}
