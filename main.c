#include "main.h"
/**
 * main - This is our main file for testing the outputs for printf
 * return (0) Success.
 */
int main()
{
  int len;
  int len2;
  len = _printf("len = Let's try to printf a simple sentence.\n");
  len2 = printf("len2 = Let's try to printf a simple sentence.\n");
  _printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  printf("Characters printed by _printf: %d\n", len);
  printf("Characters printed by printf: %d\n", len2);
  return (0);
}
