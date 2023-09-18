#include "main.h"
/**
  * caseCheck - check the format
  * @format: arguments passed in printf func
  * @numchar: character count
  * @args: Parameters
  * Return: Int
  */
int caseCheck(const char *format, int numchar, va_list args)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			numchar = printf_int(args, numchar);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			numchar++;
			break;
		case 's':
			numchar = printf_str(args, numchar);
			break;
		case '%':
			_putchar('%');
			numchar++;
			break;
		case 'b':
			numchar = printf_binary(va_arg(args, unsigned int), numchar);
			break;
		case 'x':
		case 'X':
			numchar = _x(va_arg(args, unsigned int), numchar, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			numchar = printf_oct(va_arg(args, unsigned int), numchar);
			break;
		case 'u':
			numchar = printf_unsgned(va_arg(args, unsigned int), numchar);
			break;
		case 'r':
			numchar = printf_reverse(args, numchar);
			break;
		case 'p':
			numchar = printf_ptr(args, numchar);
			break;
		default:
			break;
	}
	return (numchar);
}
