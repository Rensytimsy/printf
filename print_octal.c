#include "main.h"
/**
 * printf_oct - is our main file that takes in two parameters
 * @num: is an integer value
 * @numchar: number of characters
 * Return: (numchar) total count.
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
	        write(1,'0',1);
		numchar++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
		       write(1,oct[j],1);
			numchar++;
		}
	}
	return (numchar);
}
