#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Stores all the elements bellow
 * @name: The name of the dog
 * @age:  The Age of the dog
 * @owner: The name of the dog owner
 *
 * Description: this stores all the variables pass to the elements
 */

struct dog
{
char *name;
float age;
char *owner;
};



#endif
