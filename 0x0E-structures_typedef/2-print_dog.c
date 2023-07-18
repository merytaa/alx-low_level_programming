#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Entry function
 * @di: print dog
 */
void print_dog(struct dog *di)
{
	if (di == NULL)
		return;

	if (di->name == NULL)
		di->name = "(nil)";
	if (di->owner == NULL)
		di->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", di->name, di->age, di->owner);
}
