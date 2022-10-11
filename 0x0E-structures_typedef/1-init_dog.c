#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - Used to initialize the struct dog type.
  * @d: first operand.
  * @name: second operand.
  * @age: third operand.
  * @owner: forth operand.
  * Return: void.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
