#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);


#endif
