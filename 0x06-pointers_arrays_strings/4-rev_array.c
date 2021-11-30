#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: Number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}

}
