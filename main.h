#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>
#include<string.h>
int _putchar(char c);
int _printf(const char *format, ...);
int caseCheck(const char *format, int numchar, va_list args);
#endif
