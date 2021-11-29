#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers, followed by a new line.
 * @a: pointer to the elemets.
 * @n: number of elements of the array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
		putchar('\n');
}
