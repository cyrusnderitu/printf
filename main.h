#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct select - symbol to its respective fuction
 * @symbol: format specifier.
 * @f: symbols's corresponding function.
 */
typedef struct select
{
	char symbol;
	int (*f)(va_list arg);
} selector;

int (*fetch_func(const char format))(va_list);
int print_char(va_list arg);
int print_str(va_list arg);
int print_bin(va_list arg);
int _putchar(char c);
int print_int(va_list args);
int print_dec(va_list args);
int print_octal(va_list arg);
#endif
