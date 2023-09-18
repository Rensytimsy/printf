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

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++; /* Move past '%'*/
			numchar += caseCheck(format, numchar, args);
			format++;
		}
		else
		{
			_putchar(*format);
			numchar++;
			format++;
		}
	}
	va_end(args);
	return (numchar);
}
