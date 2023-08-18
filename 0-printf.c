#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format of input
 * Return: return output
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
		}
		
	}
	
	va_end(args);
	return 0;
}
int main()
{
	_printf("%%");
	return 0;
}