#include "main.h"
/**
 *_putchar - function takes one parameter of type int
 *@c: is of int value
 *Return: returns the character passed
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
