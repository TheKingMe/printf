#include "main.h"
/**
 *rp_char - For c
 *@args: from list
 *Return: count
 **/
int rp_char(va_list args)
{
	int count = 0;
	char c;

	c = va_arg(args, int);
	_putchar(c);
	count++;
	return (count);
}
/**
 *rp_string - For s
 *@args: from list
 *Return: count
 **/
int rp_string(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str != 0)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
