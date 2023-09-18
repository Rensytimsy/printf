#include "main.h"

int printf_binary(unsigned int num, int numchar)
{
	int binary[32] = {0};
	int i = 0;
	if (num == 0)
	{
		_putchar('0');
		numchar++;
		return (numchar);
	}
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		numchar++;
	}
	return (numchar);
}
