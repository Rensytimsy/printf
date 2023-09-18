#include "main.h"

/**
  * printf_reverse - function that prints reverse
  * @args: arguments to be passed
  * @numchar: number of characters printed
  * Return: return numchar
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
