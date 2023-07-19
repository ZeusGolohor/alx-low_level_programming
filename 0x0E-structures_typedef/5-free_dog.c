#include "dog.h"

/**
 * free_dog - A function that frees dogs.
 * @d: a pointer to a new dog type.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
