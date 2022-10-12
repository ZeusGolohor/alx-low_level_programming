#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - Creates a new dog.
  * @name: first operand.
  * @age: second operand.
  * @owner: third operand.
  * Return: dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(strlen(name) + 1);
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);
	return (dog);
}
