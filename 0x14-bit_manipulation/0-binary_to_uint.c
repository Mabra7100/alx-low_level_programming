#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int unit = 0;

	if (!b)
		return (0);


	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		unit <<= 1;
	}

	return (unit);
}
