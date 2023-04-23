#include "main.h"

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
{'b', print_bin},
{'\0', NULL}
};
int i;
for (i = 0; array[i].symbol != '\0'; i++)
{
if (array[i].symbol == format)
return (array[i].f);
}
return (0);
}
