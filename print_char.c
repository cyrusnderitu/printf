#include "main.h"

/**
* print_char - Print char to screen
* @arg: argument passed
* Return: Always 1 for single char
*/
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}
