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
	{
		write(1, "(null)", 6);
		return (6);
	}
	else if (str[0] == '\0')
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
/**
 * binary_2 - switch a number from decimal to binary
 * @b: positive integer
 * Return: return the value in binary
 */
int binary_2(unsigned int b)
{
	int r, count;

	if (b == 0)

		return (0);
	r = b % 2;
	count = binary_2(b / 2);

	_write(r + '0');
	return (count + 1);
}
/**
 * rp_binary - switch a number from decimal to binary
 * @args: the argument passed in printf
 * Return: return the count
 */
int rp_binary(va_list args)
{
	int count = 0;
	unsigned int b = va_arg(args, int);

	if (b == 0)
	{
		_write('0');
		return (1);
	}
	count = binary_2(b);
	return (count);
}
