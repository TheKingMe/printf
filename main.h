#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
/**
 * struct func - struct
 * @c: pointer to string
 * @ptr: pointer to function
*/
typedef struct func
{
	char *c;
	int (*ptr)(va_list);

} fc;
int _write(char c);
int rp_char(va_list args);
int rp_string(va_list args);
int rp_int(va_list args);
int change(char s, va_list args);
#endif
