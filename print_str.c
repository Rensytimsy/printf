#include "main.h"
/**
 *printf_str - is our function that takes two parameter and return a string.
 *@args: This are passed parameters for testing the string function
 *@numchar: This is the number count of arguments passed
 *Return: (numchar) which is the length of the string.
 */

int printf_str(va_list args, int numchar)
{
char *string = va_arg(args, char *);
while (*string != '\0')
{
write(1, string, 1);
numchar++;
string++;
}
return (numchar);
}
