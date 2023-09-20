#include "main.h"
/**
 * caseCheck - Handles format specifiers for a custom printf function.
 * @format: A format string containing format specifiers.
 * @numchar: The number of characters printed so far.
 * @args: A variable argument list.
 *
 * Return: The updated value of numchar or -1 for unsupported specifiers.
 */

int caseCheck(const char *format, int numchar, va_list args)
{
switch (*format)
{
case 'd':
case 'i':
numchar += printf_int(args, numchar);
break;
case 'c':
numchar += _putchar(va_arg(args, int));
break;
case 's':
numchar += printf_str(args, numchar);
break;
case '%':
_putchar('%');
numchar++;
break;
case 'b':
numchar += printf_binary(va_arg(args, unsigned int), numchar);
break;
case 'x':
case 'X':
numchar += _x(va_arg(args, unsigned int), numchar, (*format == 'X') ? 1 : 0);
break;
case 'o':
numchar += printf_oct(va_arg(args, unsigned int), numchar);
break;
case 'u':
numchar += printf_unsigned(va_arg(args, unsigned int), numchar);
break;
case 'r':
numchar += printf_reverse(args, numchar);
break;
case 'p':
numchar += printf_ptr(args, numchar);
break;
default:
numchar += print_unknown(format);
break;
}
return (numchar);
}
