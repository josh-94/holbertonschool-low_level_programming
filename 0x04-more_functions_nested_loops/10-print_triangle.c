#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: size of triangle.
 */
void print_triangle(int size)
{
	int a, b; 

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (b = size; b > 0; b--)
	{
		for (a = size; a > 0; a--)
			_putchar(' ');
			_putchar('#');
		_putchar('\n');
	}

}
