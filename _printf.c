#include "main.h"
/**
 * _printf - Function for printing to stdout.
 * @format: format specifier
 * @...: va_list to be passed
 * Return: count of char else (-1)
 */
int _printf(const char *format, ...)
{
	unsigned int x = 0, count = 0;
	va_list lc;

	if (!format)
		return (-1);
	va_start(lc, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
				return (-1);
			else if (format[x + 1] == '%')
			{
				_putchar('%');
				count++;
				x++;
			}
			else if (fetch_func(format[x + 1]) != NULL)
			{
				count += (fetch_func(format[x + 1]))(lc);
				x++;
			}
			else
			{
				_putchar(format[x]);
				count++;
			}
		}
		else
		{
			_putchar(format[x]);
			count++;
		}
	}

	return (count);
	va_end(lc);
}
