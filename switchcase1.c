#include "main.h"

/**
 * caseCheck - Handles format specifiers for a custom printf function.
 * @format: A format string containing format specifiers.
 * @numchar: The number of characters printed so far.
 * @args: A variable argument list.
 *
 * Return: The updated value of numchar.
 */

int caseCheck(const char *format, int numchar, va_list args)
{
switch (*format)
{
case 'd':
case 'i':
int value = va_arg(args, int);
char buffer[12];
int len;
int len = snprintf(buffer, sizeof(buffer), "%d", value);
write(1, buffer, len);
numchar += len;
break;
default:
break;
}
}
