#include "main.h"

/**
 * print_hexa - convert deci to hexa
 * @arg: the argument int to convert
 * Return: len of hex else (-1)
 */
int print_hexa(va_list arg)
{
int deciHex[50], num, i, j;
num = va_arg(arg, int);
while (num > 0)
{
for (i = 0; num > 0; i++)
{
deciHex[i] = num % 16;
num = num / 16;
}
for (j = i - 1; j >= 0; j--)
{
_putchar('0' + deciHex[j]);
}
}
return (i);
}
