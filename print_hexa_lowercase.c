#include "main.h"

/**
 * print_hexa_lowercase - convert deci to hexa
 * @arg: the argument int to convert
 * Return: len of hex else (-1)
 */
int print_hexa_lowercase(va_list arg)
{
	char hexLc[32];

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
			hexLc[i] = temp + 48;
		else
			hexLc[i] = temp + 87;
		num /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexLc[j]);
		size++;
	}

	return (size);
}
