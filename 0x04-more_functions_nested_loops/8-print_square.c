#include "main.h"
/**
  * print_square - function that prints a square,
  * followed by a new line.
  * @size: Times to repeat.
  */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (b = size; b > 0; b--)
	{
		for (a = size; a > 0; a--)
			_putchar('#');
		_putchar('\n');
	}
}
