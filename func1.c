#include "main.h"
/**
 *printf_int - main function takes two parameter as arguments
 *@args: number of arguments passed as parameters
 *@numchar: number of count of arguments
 *Return: (numchar)
*/
int printf_int(va_list args, int numchar)
{
int num = va_arg(args, int);
int digits = 0;
int temp = num;
int digit;
if (num < 0)
{
numchar += _putchar('-');
num = -num;
temp = num;
}
do {
digits++;
temp /= 10;
} while (temp != 0);
while (digits > 0)
{
int pow10 = 1;
int i;
for (i = 1; i < digits; i++)
{
pow10 *= 10;
}
digit = num / pow10;
numchar += _putchar(digit + '0');
num -= digit * pow10;
digits--;
}
return (numchar);
}
