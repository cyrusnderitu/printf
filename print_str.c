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
		;
	write(1, str, i);
	return (i);
}
write(1, "(null)", 6);
return (6);
}
