#include "main.h"

/**
 * print_hexa_uppercase - convert deci to uppercase hexa
 * @arg: the argument int to convert
 * Return: len of hex else (-1)
 */
int print_hexa_uppercase(va_list arg)
{
	char hexUc[32];

	long int num = va_arg(arg, unsigned int), temp, i = 0, j, size = 0;

	if (num == 0)
	{
		_putchar('0');
		size++;
	}

	while (num > 0)
	{
		temp = 0;
		temp = num % 16;
		if (temp < 10)
			hexUc[i] = temp + 48;
		else
			hexUc[i] = temp + 55;
		num /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexUc[j]);
		size++;
	}

	return (size);
}
