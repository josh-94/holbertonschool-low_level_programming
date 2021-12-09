#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: int
 * @argv: char and string
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int count;

	for (i = 0; i < argc && argv[i]; i++)
	{
		count = i;
	}
	printf("%d\n", count);

	return (0);
}
