#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format of input
 * Return: return output
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
			}
			else
			{
				int (*func)(va_list);
				va_list args_copy;

				va_copy(args_copy, args);
				func = change(format[i + 1]);
				if (func)
					count += func(args);
				va_end(args_copy);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
