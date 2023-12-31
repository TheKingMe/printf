#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format of input
 * Return: return output
 */
int _printf(const char *format, ...)
{
	int i = 0, j, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_write(format[i]);
			i++;
			count++;
		}
		else if (format[i + 1] == '%')
		{
			_write('%');
			count++;
			i += 2;
		}
		else if (format[i + 1] == '\0')
		{
			va_end(args);
			return (-1);
		}
		else
		{
			j = change(format[i + 1], args);
			if (j == -1 || j != 0)
				i++;
			if (j > 0)
				count += j;
			if (j == 0)
				_write('%'), count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
