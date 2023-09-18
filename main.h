#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>
#include<string.h>
#include <limits.h>
#define MAX_HEX_DIGITS 16

int _putchar(char c);
int _printf(const char *format, ...);
int caseCheck(const char *format, int numchar, va_list args);
int printf_str(va_list args, int numchar);
int printf_int(va_list args, int numchar);
int printf_char(va_list args, int numchar);
int printf_unsigned(unsigned int num, int numchar);
int printf_binary(va_arg(args, unsigned int), numchar);
int _x(va_arg(args, unsigned int), numchar, (*format == 'X') ? 1 : 0);
int printf_oct(va_arg(args, unsigned int), numchar);
int printf_unsigned(va_arg(args, unsigned int), numchar);
int printf_reverse(args, numchar);
int printf_ptr(args, numchar);
#endif
