#include "main.h"

/**
 * print_unsigned_int - prints unsigned int in decimal notation
 * @arg: points to unsigned int to be printed
 *
 * Return: number of digits printed
 */
int print_unsigned_int(va_list arg)
{
	unsigned int arr[12];
	unsigned int num, rem;
	int count = 0, i = 0;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num != 0)
	{
		rem = num % 10;
		arr[i++] = rem + '0';
		num /= 10;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(arr[i]);
		count++;
	}

	return (count);
}
