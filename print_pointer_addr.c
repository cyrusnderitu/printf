#include "main.h"

/**
 * print_pointer - prints void addr given
 * @arg: argument provided
 * Return: Len of stdout
 */
int print_addr(va_list arg)
{
	void *ptr;
	int i;
	int size;
	char *nil = "(nil)";
	char hexLc[32];
	ptr = va_arg(arg, void*);
	unsigned long int num = (unsigned long int)ptr;
	if (ptr != NULL)
	{
		for (i = 0; hexLc[i] != '\0'; i++)
		{
			hexLc[i] = num % 16;
			num /= 16;
			size++;
		}
		return (i);
	}
	else
	{
		write(1, &nil, 6);
		return (6);
	}
	while (size-- > 0)
	_putchar(hexLc[size]);
}
