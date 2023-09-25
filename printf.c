#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
int numchar = 0;
va_list args;
if (format == NULL)
{
return (-1);
}
if (!format || (forma[0] == '%' && !format[1]))
{
return (-1);
}
if ((format[0] == '%' && !format[1]) || !format)
{
return (-1);
}
if ((!format[2] && format[0] == '%' && format[1] == ' '))
{
return (-1);
}
 
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
numchar = caseCheck(format, numchar, args);
}
else
{
write(1, format, 1);
numchar++;
}
format++;
}
va_end(args);
return (numchar);
}
