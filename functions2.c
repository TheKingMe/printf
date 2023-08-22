#include "main.h"
/**
 * binary_oct - switch a number from decimal to binary or octal
 * @b: positive integer
 * @a: base
 * Return: return the value in binary
 */
int binary_oct(unsigned int b, unsigned int a)
{
	int r, count;

	if (b == 0)

		return (0);
	r = b % a;
	count = binary_oct(b / a, a);

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
	count = binary_oct(b, 2);
	return (count);
}
/**
 * rp_oct - switch a number from decimal to binary
 * @args: the argument passed in printf
 * Return: return the count
 */
int rp_oct(va_list args)
{
	int count = 0;
	unsigned int b = va_arg(args, int);

	if (b == 0)
	{
		_write('0');
		return (1);
	}
	count = binary_oct(b, 8);
	return (count);
}
/**
 *rp_STRING - For s
 *@args: from list
 *Return: count
 **/
int rp_STRING(va_list args)
{
	int count, i;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_write('\\');
			_write('x');
			if (str[i] <= 15)
			{
				_write('0' + 0);
				count++;
			}
			count += hexa(str[i], 16, 1);
			count += 2;
		}
		else
		{
			_write(str[i]);
			count++;
		}
	}

	return (i);
}
