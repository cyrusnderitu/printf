#include "main.h"

/**
 * print_str_rev - prints a string in reverse
 * @arg: string to print
 *
 * Return: number of characters printed
 */
int print_str_rev(va_list arg)
{
	int i, len;
	char *str;

	str = va_arg(arg, char *);

	for (i = 0; str[i] != '\0'; i++)
		;
	len = i;
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	return (len);
}
