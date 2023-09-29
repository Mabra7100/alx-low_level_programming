#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - multiplies two number
*if the program does not receive two arguments, it prints error and return 1
*
*@argc: length of argv
*@argv: place holder for arguments
*
*Return: Returns 1 when there a problem and return 0 when its runs correctly
*/

int main(int argc, char *argv[])
{
if (argc - 1 == 2)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else if (argc - 1 != 2)
{
printf("Error\n");
return (1);
}
return (0);
}
