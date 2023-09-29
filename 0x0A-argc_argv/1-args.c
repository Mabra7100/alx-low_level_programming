#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *Prints a number and follows by a new line
 *
 *@argc: This is the arg for len of argv
 *@argv: This stores the arg
 *
 *Return: This always return 0
 */

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);

}
