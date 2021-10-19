#include "main.h"

/**
 * print_chessboard - print given chessboard
 *
 * @a: two dimensional array - 8x8
 *
 * Return: none - void function
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
