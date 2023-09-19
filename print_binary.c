#include "main.h"

/**
  * printf_binary - function for printing binary numbers
  * @num: numbers to print
  * @numchar: count number of characters
  * Return: return numchar
  */
int printf_binary(unsigned int num)
{
    int binary[32] = {0};
    int i = 0;

    if (num == 0)
    {
        char zero = '0';
        write(1, &zero, 1);
        return 1;
    }
    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    int numchar = 0;
    while (i > 0)
    {
        i--;
        char digit = '0' + binary[i];
        write(1, &digit, 1);
        numchar++;
    }
    return numchar;
}
