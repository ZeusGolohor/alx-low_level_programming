#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: A pointer to the struct dog variable.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog _dog;
	dog *__dog = &_dog;

	__dog->name = name;
	__dog->age = age;
	__dog->owner = owner;
	*d = _dog;
}
