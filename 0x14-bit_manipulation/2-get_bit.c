#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: val
 */

int get_bit(unsigned long int n, unsigned int index)
{
        int bit;

        bit = (n >> index);
        while (index > 32)
        {
                return (-1);
                break;
        }
        return (bit & 1);
}
