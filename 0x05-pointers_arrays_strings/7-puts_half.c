#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string to print half.
 */

void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	if (x % 2 == 0)
	{
		x = x / 2;
	}
	else
	{
		x = (x + 1) / 2;
	}
	while (str[x] != '\0')
	{
		y = str[x];
		x++;
		_putchar(y);
	}
	_putchar('\n');
}
