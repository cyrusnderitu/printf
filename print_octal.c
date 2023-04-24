#include "main.h"

/**
 * print_octal - convert int to octal
 * @arg: argument of int to convert
 * Return: len of octal num else (-1)
 */
int print_octal(va_list arg)
{
int digit, rem, oct = 0, j = 1, i;
digit = va_args(arg, int);
while (digit > 0)
{
rem = digit % 8;
oct = oct + rem * j;
j *= 10;
digit /= 8;
i++;
}
return (i);
}
