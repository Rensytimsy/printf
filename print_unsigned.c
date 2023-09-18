#include "main.h"
/**
 * printf_unsigned - is our main function.
 * @num: is of integer value.
 * @numchar: is the total calculation of arguments
 * Return: (numchar)
 */
int printf_unsgned(unsigned int num, int numchar)
{
int digits = 0;
unsigned int temp = num;
do {
digits++;
temp /= 10;
} while (temp != 0);
if (num == 0)
{
_putchar('0');
numchar++;
}
else
{
char unsigned_str[11];
int i = 0;
while (num != 0)
{
unsigned_str[i] = (num % 10) + '0';
num /= 10;
i++;
}
for (i = digits - 1; i >= 0; i--)
{
_putchar(unsigned_str[i]);
numchar++;
}
}
return (numchar);
}
