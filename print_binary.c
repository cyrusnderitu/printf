#include "main.h"

/**
* print_bin - converts dec to bin
* @arg: argument provided
* Return: Length of binary
*/
int print_bin(va_list arg)
{
int arr[50], x, i, j, len;
x = va_arg(arg, int);
while (x > 0)
{
for (i = 0; x > 0; i++)
{
arr[i] = x%2;
x = x/2;
}
for (j = i - 1; j >=0; j--)
{
_putchar(arr[j]);
len++;
}
return (len);
va_end(arg);
}
}