#include "main.h"

/**
 * print_pointer - prints void addr given
 * @arg: argument provided
 * Return: Len of stdout
 */
int print_addr(va_list arg)
{
	int x;
	void *ptr;
	char *nil = "(nil)";
	ptr = va_arg(arg, void*);
	if (ptr != NULL)
	{
		_putchar('0');
		_putchar('x');
		int result = print_hexa_lowercase(ptr);
		return (result + 2);
	}
	else
	{
		write(1, &nil, 6);
		return (6);
	}
}
