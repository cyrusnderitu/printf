#include "main.h"

/**
 * fetch_func - Fetches a func from an array pool
 * @format: format to be compared to the
 * function fetched.
 * Return: num of char printted else (-1).
 */
int (*fetch_func(const char format))(va_list)
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
