#ifndef __FILE__H_
#define __FILE__H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Name, age and owner's name of a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 *
 * Description: Structure for storing the name of the dog the age and
 *              the name of the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif /* __FILE__H_ */
