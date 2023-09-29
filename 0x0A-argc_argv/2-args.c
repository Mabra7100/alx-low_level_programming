#include <stdio.h>

/**
 *main - prints all arguments its receives
 *only prints one argument per line, ending with a new line
 *
 *@argc: length of arguments
 *@argv: arguments place holder
 *
 *Return: Always return 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
