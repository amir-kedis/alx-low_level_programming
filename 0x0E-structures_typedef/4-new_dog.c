#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	name_copy = malloc(sizeof(char) * (name_len + 1));
	if (!name_copy)
	{
		free(d);
		return (NULL);
	}
	owner_copy = malloc(sizeof(char) * (owner_len + 1));
	if (!owner_copy)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}
	for (name_len = 0; name[name_len]; name_len++)
		name_copy[name_len] = name[name_len];
	name_copy[name_len] = '\0';
	for (owner_len = 0; owner[owner_len]; owner_len++)
		owner_copy[owner_len] = owner[owner_len];
	owner_copy[owner_len] = '\0';
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
