#include "main.h"

/**
 * _putchar - writes character to stdout (1)
 * @c: The print charaacter
 * Return: Always (1) success else (-1).
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
