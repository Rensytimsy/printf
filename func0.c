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
const char *nullstr = "(null)";
if (string == NULL)
while (*nullstr != '\0')
{
putchar(*nullstr);
numchar++;
nullstr++;
}
else
{
while (*string != '\0')
{
_putchar(*string);
numchar++;
string++;
}
}
return (numchar);
}


/**
 *printf_char - is our main function that takes two parameters
 *@args:  arguments passed to this function
 *@numchar:  is the total count of arguments
 *Return: (numchar + 1) the total count plus '\0'
*/

int printf_char(va_list args, int numchar)
{
int character = va_arg(args, int);
_putchar(character);
return (numchar + 1);
}
