#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * struct dog - object named dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: pointer to struct
 *
 * Description: an object with 3 members
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
