#include "function_pointers.h"


/**
 *print_name - its prints out name
 *
 *@name: place holder for name
 *@f: place holder for input of name
 *
 */

void print_name(char *name, void (*f)(char *))
{


if (*name != 0 && *f != 0)
{
f(name);
}

}
