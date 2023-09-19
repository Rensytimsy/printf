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
		case 'c':
			{
				char c;

				c = va_arg(args, int);
				write(1, &c, 1);
				numchar++;
				break;
			}
		case 's':
			{
				const char *str;
				int len = 0;

				str = va_arg(args, const char *);
				while (str[len] != '\0')
					len++;
				write(1, &str, len);
				numchar += len;
				break;
			}
		case '%':
			{
				char percent;

				percent= '%';
				write(1, &percent, 1);
				numchar++;
				break;
			}
		default:
			break;
	}
	return (numchar);
}

