#ifndef MAIN_FILE_I_O
#define MAIN_FILE_I_O
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
