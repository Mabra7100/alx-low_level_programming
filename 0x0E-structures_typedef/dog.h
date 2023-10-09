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

typedef struct dog dog_t;

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
