#include "main.h"


void print_char(va_list arg)
{
char letter;
letter = va_arg(arg, int);
printf("%c", letter);
}
void print_str(va_list arg)
{
char *str;
str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
* get_func - Picks a func in relation 
*  to the format equal to the selector array
*
*@format: string to be be compared to with
*  the selector array
*
*Return: number of charaters printed else 0
*/
int (*get_func(const char format))(va_list)
{
selector(array[]) = {
{'c', print_char},
{'s', print_str},
{'\0', NULL}
};
int i;
for (i = 0; array[i].symbol != '\0'; i++)
{
if (array[i].symbol == format)
{
return (array[i].f);
}
}
return (0);
}