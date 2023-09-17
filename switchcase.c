#include "main.h"
/**
  * caseCheck - check the format
  * @format: arguments passed in printf func
  * @numchar: character count
  * @args: Parameters
  * Return: Int
  */
int caseCheck(const char *format, int numchar, va_list args)
{
	switch (*format)
	{
		case '%':
			{
				write(1, format, 1);
				numchar++;
			}
			break;
		case 'c':
			{
				int character = va_arg(args, int);

				write(1, &character, 1);

				numchar++;
			}
			break;
		case 's':
			{
				char *string = va_arg(args, char *);
				int i = 0;

				while (string[i] != '\0')
				{
					i++;
				}

				write(1, string, i);
				numchar += i;
			}
			break;
	}
	return(numchar);
}
