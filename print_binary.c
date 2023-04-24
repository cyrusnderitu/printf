#include "main.h"

/**
* print_bin - converts dec to bin
* @arg: argument provided
* Return: Length of binary
*/
int print_bin(va_list arg)
{
long int arr[50], x, i, j, size = 0;
x = va_arg(arg, unsigned int);
if (x == 0)
{
	_putchar('0');
	return (1);
}
if (x > 0)
{
for (i = 0; x > 0; i++)
{
arr[i] = x % 2;
x = x / 2;
}
for (j = i - 1; j >= 0; j--)
{
_putchar('0' + arr[j]);
size++;
}
return (size);
}
else
return (-1);
}
