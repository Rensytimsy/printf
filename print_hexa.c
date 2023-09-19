#include "main.h"

/**
  * _x - function to check for hexadecimal
  * @num: numbers to print
  * @numchar: number of vharacters printed
  * @uppercase: uppercase
  * Return: return integer
  */
int _x(unsigned int num, int numchar, int uppercase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = 48 + remainder;
		}
		else
		{
			if (uppercase)
			{
				hex[i] = 65 + (remainder - 10);
			}
			else
			{
				hex[i] = 97 + (remainder - 10);
			}
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
	        write(1,"0",1);
		numchar++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
		        write(1,hex[j],1);
			numchar++;
		}
	}
	return (numchar);
}
