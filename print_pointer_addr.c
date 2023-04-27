#include "main.h"

/**
 * print_pointer - prints void addr given
 * @arg: argument provided
 * Return: Len of stdout
 */
int print_addr(va_list arg)
{
	void *ptr;
	int i, val;
	unsigned long int num;
	char *nil = "(nil)";
	char hexlc[32];

	num = (unsigned long int)ptr;
	ptr = va_arg(arg, void*);

	if (num != 0)
	{
		for (i = 0; hexlc[i] != '\0'; i++)
		{
			val = num % 16;
			if (val < 10)
			{
				hexlc[i] = val + 0;
			}
			else
			{
				hexlc[i] = val - 10 + 'a';
			}
			num /= 16;
		}
		return (i);
	}
	else
	{
		write(1, &nil, 6);
		return (6);
	}
	while (i-- > 0)
	_putchar(hexlc[i]);
}
