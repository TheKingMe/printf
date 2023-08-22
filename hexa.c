#include "main.h"
/**
 * hexa- switch from decimal to hexadecimal
 * @b:number
 * @a:base
 * @c:checks if we want to convert the number to hexadecimal
 * Return: return count
 */
int hexa(unsigned int b, unsigned int a, int c)
{
	int r, count;

	if (b == 0)

		return (0);
	r = b % a;
	count = hexa(b / a, a, c);
	if (r < 10)
		_write(r + '0');
	else if (r >= 10 && c == 0)
		_write((r - 10) + 'a');
	else
		_write((r - 10) + 'A');
	return (count + 1);
}
/**
 * rp_hexa - switch a number from decimal to hexadecimal
 * @args: the argument passed in printf
 * Return: return the count
 */
int rp_hexa(va_list args)
{
	int count = 0;
	unsigned int b = va_arg(args, int);

	if (b == 0)
	{
		_write('0');
		return (1);
	}
	count = hexa(b, 16, 0);
	return (count);
}
/**
 * rp_HEXA - from decimal to hexadecimal with uppercases
 * @args: argument passed in printf
 * Return: return count
 */
int rp_HEXA(va_list args)
{
	int count = 0;
	unsigned int b = va_arg(args, int);

	if (b == 0)
	{
		_write('0');
		return (1);
	}
	count = hexa(b, 16, 1);
	return (count);
}
