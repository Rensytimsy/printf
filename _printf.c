#include "main.h"
/**
 *
 */

int _printf(const char *format, ...)
{
  /*format are the passed arguments*/
  /*argsCount will be the number of arguments counted*/
  int argsCount = 0;
  va_list arguments;
  /*Checks if the format is null return an error but if not proceed*/
  if(format == NULL)
    return (-1);
  
    va_start(arguments, format);
    while(*format != '\0')
      {
	if(*format != '%')
	  /*If the percentage sign is not introduced just print what is present*/
	  {
	  write(1, format, 1);
	  }
	format ++;
	argsCount += strlen(format);
      }
    return(argsCount);
}
