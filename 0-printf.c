#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format of input
 * Return: return output
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%')
				_write('%'), i++;
			else
			{
				int (*func)(va_list);
				va_list args_copy;

				va_copy(args_copy, args);
				func = change(format[i + 1]);
				if (func)
					count += func(args);
				else
					_write(format[i]), _write(format[i + 1]);
				va_end(args_copy);
				i++;
			}
		}
		else
			_write(format[i]), count++;
		i++;
	}
	va_end(args);
	return (count);
}

