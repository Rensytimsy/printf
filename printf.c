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

        while (*format)
        {
                if (*format == '%')
                {
                         format++;

                         switch (*format)
                         {
                                case '%':
                                {
                                         write(1, format, 1);
                                }
                                break;
                                case 's':
                                {
                                        char *string = va_arg(args, char *);
                                        int i = 0;
                                        while (string[i] != '\0')
                                        {
                                                i++;
                                        }
                                        write(1, string, i);
                                        numchar += i;
                                }
                                break;
                         }
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
