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
	int val;
	char *nil = "(nil)";
	char hexLc[32];
	ptr = va_arg(arg, void*);
	unsigned long int num = (unsigned long int)ptr;
	if (num != 0)
	{
		for (i = 0; hexLc[i] != '\0'; i++)
		{
			int val = num % 16;
			if (val < 10)
			{
				hexLc[i] = val + 0;
			}
			else
			{
				hexLc[i] = val - 10 + 'a';
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
	_putchar(hexLc[i]);
}
