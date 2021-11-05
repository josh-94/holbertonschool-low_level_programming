#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int b = 0;

	do {
	for (c = 'a'; c <= 'z'; c++)

	_putchar(c);
	_putchar(10);
	b++;
	} while (b < 10);
}
