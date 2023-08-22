#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#define BUFFER_SIZE 1024

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
int rp_binary(va_list args);
int binary_oct(unsigned int b, unsigned int a);
int rp_u_int(va_list args);
int rp_oct(va_list args);
int hexa(unsigned int b, unsigned int a, int c);
int rp_hexa(va_list args);
int rp_HEXA(va_list args);
int rp_STRING(va_list args);
int rp_pointer(va_list args);
int rp_reverse(va_list args);
int rp_rot13(va_list args);


int change(char s, va_list args);
#endif
