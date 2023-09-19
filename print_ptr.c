#include "main.h"

/**
 * printf_ptr - Converts and prints a pointer value in hexadecimal format.
 * @args: A variable argument list containing a pointer.
 * @numchar: The total number of characters printed so far.
 *
 * Return: The updated value of numchar.
 */

int printf_ptr(va_list args, int numchar)
{
	void *ptr = va_arg(args, void*);
	unsigned long num = (unsigned long) ptr;
	int digits = 0;
	int i;
	unsigned long temp = num;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];
	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}
	numchar += _putchar('0');
	numchar += _putchar('x');
	if (num == 0)
	{
		numchar += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			int digit = num % 16;
			hex[i] = hex_digits[digit];
			num /= 16;
		}
		for (i = 0; i < digits; i++)
		{
			numchar += _putchar(hex[i]);
		}
	}
	return (numchar);
}
