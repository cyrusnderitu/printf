#include "main.h"

/**
* print_bin - converts dec to bin
* @arg: argument provided
* Return: Length of binary
*/
int print_bin(va_list arg)
{
int arr[20], n, i, j;
n = va_arg(arg, int);
if (n > 0)
{
for (i = 0; n > 0; i++)
{
arr[i] = n%2;
n = n/2;
}
for (j = i - 1; j >= 0; j--)
_putchar(arr[j]);
}
else
return (-1);
}