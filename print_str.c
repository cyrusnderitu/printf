#include "main.h"

/**
* print_str - Prints string
* @arg: argument passed
* Return: Length of str
*/
int print_str(va_list arg)
{
char *str;
int i;
str = va_arg(arg, char *);
if (str != NULL)
{
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return (i);
va_end(arg);
}
}