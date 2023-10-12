#include "variadic_functions.h"


/**
 *sum_them_all - sums all the parameters from the fucntion
 *
 *@n: The number of items
 *
 *Return: Return 0 if n == 0
 *
 */


int sum_them_all(const unsigned int n, ...)
{
int answer = 0;
unsigned int i = 0;

if (n == 0)
{
return 0;
}
else
{
va_list ag;
va_start(ag, n);


for (i = i; i < n; i++)
{
answer += va_args(ag, int);
}
v_end(ag);
}
return answer;
}
