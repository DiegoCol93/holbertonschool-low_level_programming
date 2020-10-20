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
	int lname = 0, lown = 0, i; /* WHY? start i = -1 when while(i++) */

	if (name == 0 || owner == 0)
		return (NULL);
	while (name[lname])
		lname++;
	while (owner[lown])
		lown++;
	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		dog->name = malloc(lname + 1);
		if (dog->name)
		{
			for (i = 0; i <= lname + 1; i++)
				dog->name[i] = name[i];
		}
		else
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(lown + 1);
		if (dog->owner)
		{
			for (i = 0; i <= lown + 1; i++)
				dog->owner[i] = owner[i];
		}
		else
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->age = age;
	}
	return (dog);
}
