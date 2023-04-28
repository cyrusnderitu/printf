#include "main.h"

/**
 * print_hex_addr - prints hexadecimal num.
 * @num: arguments parameter to the function.
 * Return: Always succes(0) else (-1).
 */
int print_hex_addr(unsigned long int num)
{
	long int i, *arr, size = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		size++;
	}
	size++;
	arr = malloc(size * sizeof(long int));

	for (i = 0; i < size; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
		{
			arr[i] = arr[i] + 39;
		}
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (size);
}

/**
 * print_pointer_addr- prints address given.
 * @val: arguments parameter.
 * Return: size.
 */
int print_pointer_addr(va_list val)
{
	void *ptr;
	char *x = "(nil)";
	long int a;
	int j, i;

	ptr = va_arg(val, void*);
	if (ptr == NULL)
	{
		for (i = 0; x[i] != '\0'; i++)
		{
			_putchar(x[i]);
		}
		return (i);
	}
	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	j = print_hex_addr(a);
	return (j + 2);
}
