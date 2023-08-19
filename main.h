#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);

typedef struct func
{
	char* c;
	int (*ptr) (va_list);

}fc;
int _putchar(char c);
#endif