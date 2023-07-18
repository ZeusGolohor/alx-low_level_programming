#include "dog.h"

/**
 * new_dog - A function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *_name, *_owner;
	unsigned int name_size, owner_size;

	name_size = get_size(name);
	owner_size = get_size(owner);
	if ((name == NULL) || (owner == NULL))
		return (NULL);
	dog = malloc(sizeof(dog_t));
	_name = malloc((sizeof(char) * name_size) + 1);
	_owner = malloc((sizeof(char) * owner_size) + 1);
	if ((dog == NULL) || (_name == NULL) || (_owner == NULL))
		return (NULL);
	_name = name;
	_owner = owner;
	dog->name = _name;
	dog->age = age;
	dog->owner = _owner;
	return (dog);
}

/**
 * get_size - Used to get the size of a string.
 * @str: the string size to be gotten.
 *
 * Return: unsigned int.
 */
unsigned int get_size(char *str)
{
	unsigned int i, count = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		count = count + 1;
	return (count);
}
