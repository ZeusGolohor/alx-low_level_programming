#ifndef DOG_H
#define DOG_H
#include <stddef.h>
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
} dog;
void init_dog(struct dog *d, char *, float, char *);
#endif
