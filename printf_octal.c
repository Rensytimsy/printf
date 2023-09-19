#include "main.h"
/**
 * printf_oct - Converts and prints an unsigned integer in octal format.
 * @num: The unsigned integer to be converted.
 * @numchar: The total number of characters printed so far.
 *
 * Return: The updated value of numchar.
 */
int printf_oct(unsigned int num, int numchar)
{
    int oct[100], i = 0, j;
	while (num != 0)
	{
		int remainder = num % 8;
		oct[i] = 48 + remainder;
		i++;
		num /= 8;
	}
	if (i == 0)
	{
		_putchar('0');
		numchar++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			numchar++;
		}
	}
	return (numchar);
}
