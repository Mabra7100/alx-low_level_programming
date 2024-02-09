#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: index
 * Return: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        *n |= (1 << index);
        return (-1);
}

