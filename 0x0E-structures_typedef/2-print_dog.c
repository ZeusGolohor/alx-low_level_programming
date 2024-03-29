#include "dog.h"

/**
 * print_dog - A function that prints a struct dog.
 * @d: A pointer to the dog struct.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: 0.000000\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
