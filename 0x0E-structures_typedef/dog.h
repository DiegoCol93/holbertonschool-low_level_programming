#ifndef __FILE__H_
#define __FILE__H_
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
};

/* Initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prints the contents of a struct dog */
void print_dog(struct dog *d);

#endif /* __FILE__H_ */
