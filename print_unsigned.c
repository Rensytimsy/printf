#include "main.h"
/**
 * printf_unsgned - is our main function.
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
write(1, '0', 1);
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
write(1, unsigned_str[i], 1);
numchar++;
}
}
return (numchar);
}
