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
	{
		free(dog);
		free(_name);
		free(_owner);
		return (NULL);
	}
	_name = _strcpy(_name, name, name_size);
	_owner = _strcpy(_owner, owner, owner_size);
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

/**
 * _strcpy - A function to copy string from @s2 to @s1.
 * @s1: pointer to where @s2 would be copied into.
 * @s2: pointer to a string to copy from.
 * @size: size of @s1 and @s2.
 *
 * Return: char *.
 */
char *_strcpy(char *s1, char *s2, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; ++i)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return (s1);
}
