#include "main.h"
/**
 *printf_int - is our main function that takes two parameters
 *@args: are the arguments passed for testing printf at type d
 *@numchar: Is the number of counts
 *Return: (numchar) the length of counts
*/

int printf_int(va_list args, int numchar)
{
int num = va_arg(args, int);
int digits = 0;
int temp = num;
int digit;
int pow10 = 1;
if (num < 0)
{
numchar += write(1, "-", 1);
num = -num;
temp = num;
}

do {
digits++;
temp /= 10;
} while (temp != 0);
while (digits > 0)
{
int i;
for (i = 1; i < digits; i++)
{
pow10 = pow10 * 10;
}
digit = num / pow10;
char digit_char = '0' + digit;
numchar += write(1, &digit_char, 1);
int prod = (digit *pow10);
num = num - prod;
digits--;
}
return (numchar);
}

