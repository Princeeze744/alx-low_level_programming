#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog to initialize.
 * @name: Name to initialize.
 * @age: Age to initialize.
 * @owner: Owner to initialize.
 *
 * Description: This function initializes a struct dog variable with the
 * provided name, age, and owner values. If the input pointer is NULL, it
 * allocates memory for a new struct dog and initializes it.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
