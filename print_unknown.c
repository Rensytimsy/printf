#include "main.h"

/**
  * print_unknown - print unknown format
  * @unknown: format that is unknown
  * Return: returns int(2)
  */
int print_unknown(const char *unknown)
{
	_putchar(*--unknown);
	_putchar(*++unknown);
	return (2);
}
