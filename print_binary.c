#include "main.h"

/**
* print_bin - converts dec to bin
* @arg: argument provided
* Return: Length of binary
*/
int print_bin(va_list arg)
{
	long int arr[32], x, i = 0, j, size = 0;

	x = va_arg(arg, unsigned int);

	if (x == 0)
	{
	_putchar('0');
	return (1);
	}

	while (x > 0)
	{
		arr[i] = x % 2;
		x /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + arr[j]);
		size++;
	}
	return (size);
}
