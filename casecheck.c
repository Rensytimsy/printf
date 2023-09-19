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
            return printf_int(args, numchar);
        case 'c':
            _putchar(va_arg(args, int));
            return (numchar + 1);
        case 's':
            return printf_str(args, numchar);
        case '%':
            _putchar('%');
            return (numchar + 1);
        case 'b':
            return printf_binary(va_arg(args, unsigned int), numchar);
        case 'x':
        case 'X':
            return _x(va_arg(args, unsigned int), numchar, (*format == 'X') ? 1 : 0);
        case 'o':
            return printf_oct(va_arg(args, unsigned int), numchar);
        case 'u':
            return printf_unsigned(va_arg(args, unsigned int), numchar);
        case 'p':
            return printf_ptr(args, numchar);
        default:
            _putchar('U');
            return -1;
    }
}

