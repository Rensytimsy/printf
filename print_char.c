#include "main.h"
/**
 *printf_char - is our main function that takes two parameters
 *@args:  arguments passed to this function
 *@numchar:  is the total count of arguments
 *Return: (numchar + 1) the total count plus '\0'
*/

int printf_char(va_list args, int numchar)
{
    int character = va_arg(args, int);

    write(1, &character, 1);
    return (numchar + 1);
}

