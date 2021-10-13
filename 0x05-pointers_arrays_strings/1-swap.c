#include "main.h"

/**
 * swap_98 - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int inicial = *a;
	*a = *b;
	*b = inicial;
}
