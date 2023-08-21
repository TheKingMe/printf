#include "main.h"
/**
 *rp_char - For c
 *@args: from list
 *Return: count
 **/
int rp_char(va_list args)
{
return (_write(va_arg(args, int)));
}
/**
 *rp_string - For s
 *@args: from list
 *Return: count
 **/
int rp_string(va_list args)
{
	int count;
	char *str;

	str = va_arg(args, char *);
if (str == NULL)
	str = "(null)";
else if (*str == '\0')
	return (-1);

for (count = 0; str[count]; count++)
	_write(str[count]);

return (count);
}
/**
*rp_int - for numbers
*@args: arg
*Return: count
*/
int rp_int(va_list args)
{
unsigned int d = 1, i, r, count = 0;
int n = va_arg(args, int);

if (n < 0)
{
	_write('-');
	count++;
	n *= -1;
}

for (i = 0; n / d > 9; i++, d *= 10)
;

for (; d >= 1; n %= d, d /= 10, count++)
{
	r = n / d;
	_write('0' + r);
}
return (count);
}
