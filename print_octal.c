#include "main.h"

/**
 * print_octal - convert int to octal
 * @arg: argument of int to convert
 * Return: len of octal num else (-1)
 */
int print_octal(va_list arg)
{
	long int octalarr[32], num, i = 0, j, size = 0;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num > 0)
	{
		while (num > 0)
		{
			octalarr[i] = num % 8;
			num /= 8;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar('0' + octalarr[j]);
			size++;
		}
		return (size);
	}
	else
		return (-1);
}
