#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; ++i)
	{
		printf("%02x", *(ptr + i));
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 1 for incorrect arguments, 2 for negative bytes
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}
