#include "dog.h"

/**
  * free_dog - Used to free the memory.
  * @d: first operand.
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
