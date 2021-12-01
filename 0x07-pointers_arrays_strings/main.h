#ifndef MAIN_FILE
#define MAIN_FILE
#include <stddef.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
char *_strchr(char *s, char c);
void print_diagsums(int *a, int size);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif
