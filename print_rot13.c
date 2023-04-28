#include "main.h"

/**
 * rot13 - prints a rot13 string
 * @arg: string to print
 *
 * Return: no of chars printed
 */
int rot13(va_list arg)
{
	int i, j;
	char *alpha, *rotalpha, *str;

	str = va_arg(arg, char *);
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rotalpha = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				_putchar(rotalpha[j]);
				break;
			}
		}
		if (j == 52)
			_putchar(str[i]);
	}

	return (i);
}
