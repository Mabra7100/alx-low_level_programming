#include "main.h"

/**
 * string_nconcat - allocates a block of memory to store concatenated strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of s2 to concatenate to s1
 *
 * Return: a pointer to allocated memory block.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
