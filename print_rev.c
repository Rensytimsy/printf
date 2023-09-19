#include "main.h"

/**
 * printf_reverse - Prints a string in reverse.
 * @args: A variable argument list containing a string.
 * @numchar: The total number of characters printed so far.
 *
 * Return: The updated value of numchar.
 */

int printf_reverse(va_list args, int numchar)
{
	char *str = va_arg(args, char *);
	int len = 0, i;
	while (str[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		numchar++;
	}
	return (numchar);
}
