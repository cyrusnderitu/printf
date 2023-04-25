#include "main.h"

/**
 * print_octal - convert int to octal
 * @arg: argument of int to convert
 * Return: len of octal num else (-1)
 */
int print_octal(va_list arg)
{
long int arr[50], x, i, j, size = 0;
x = va_arg(arg, int);
if (x == 0)
{
putchar('0');
return (1);
}
if (x > 0)
{
for (i = 0; x > 0; i++)
{
arr[i] = x % 8;
x = x / 8;
}
for (j = i - 1; j >= 0; j--)
{
putchar('0' + arr[j]);
size++;
}
return (size);
}
else
return (-1);
}
