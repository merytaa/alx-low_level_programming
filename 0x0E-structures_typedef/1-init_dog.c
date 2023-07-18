#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @di: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *di, char *name, float age, char *owner)
{
	if (di == NULL)
		di = malloc(sizeof(struct dog));
	di->name = name;
	di->age = age;
	di->owner = owner;
}
