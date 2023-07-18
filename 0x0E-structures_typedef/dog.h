#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - Used to create a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Description: Used to create a new dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
#endif
