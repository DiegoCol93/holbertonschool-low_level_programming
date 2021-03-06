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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prints the contents of a struct dog */
void print_dog(struct dog *d);

/* Creates a new dog. */
dog_t *new_dog(char *name, float age, char *owner);

/* Frees memory from a dog struct. */
void free_dog(dog_t *d);

#endif /* __FILE__H_ */
