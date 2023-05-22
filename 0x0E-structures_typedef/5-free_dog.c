#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - object named dog
 * @d: pointer to struct
 *
 * Description: an object with 3 members
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
