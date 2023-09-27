#include "main.h"

/*
 *
 *_puts_recursion - prints out char
 *@s: This my entry
 *
 */

void _put_recursion(char *s)
{
  if (*s == '\0')
    {
      _putchar('\n');
      return;
    }
  _putchar(*s);
  s++;
  _put_recursion(s);
}
