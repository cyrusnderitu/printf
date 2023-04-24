#include "main.h"

/**
 * print_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int), count = 0;
	int i, rem, j, k;
	char *str = (char*) malloc(12 * sizeof(char));
	char *p;
	char tmp;

	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}

	else
	{
		i = 0;
		if (num < 0)
		{
			str[0] = '-';
			num = -num;
			i = 1;
		}
		while (num != 0)
		{
			rem = num % 10;
			str[i++] = rem + '0';
		
			num /= 10;
		}
		str[i] = '\0';
		
		if (str[0] == '-')
		{
			for (j = 1, k = i - 1; j < k; j++, k--)
			{
				tmp = str[j];
				str[j] = str[k];
				str[k] = tmp;
			}
		}
		else
		{
			for (j = 0, k = i - 1; j < k; j++, k--)
			{
				tmp = str[j];
				str[j] = str[k];
				str[k] = tmp;
			}
		}
	}
	
	p = str;
	
	while (*p != '\0')
	{
		_putchar(*p++);
		count++;
	}
	
	free(str);
	
	return (count);
}
