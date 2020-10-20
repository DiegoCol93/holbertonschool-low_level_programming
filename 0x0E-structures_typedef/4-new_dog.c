#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Adds a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: dog, a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lname = 0, lown = 0, i = -1; /* WHY? start i = -1 when while(i++) */

	if (name == 0 || owner == 0)
		return (NULL);
	while (name[lname])
		lname++;
	while (owner[lown])
		lown++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(lname + 1);
	if (dog->name)
	{
		while (i++ < lname)
			dog->name[i] = name[i];
	}
	else
	{
		free(dog);
		return (NULL);
	}
	i = -1;
	dog->owner = malloc(lown + 1);
	if (dog->owner)
	{
		while (i++ < lown)
			dog->owner[i] = owner[i];
	}
	else
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
