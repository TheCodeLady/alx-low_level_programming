#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - point of entry
 * @s: charater variable
 * Return: 0
 */
int _strlen(char *s)
{
	int total = 0;

	while (*s != '\0')
	{
		total++;
		s++;
	}

	return (total);
}
/**
 * *_strcpy - point of entry
 * @dest: string pointer
 * @src: string pointer
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
/**
 * *new_dog - object named dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: copy of name and owner
 * Description: an object with 3 members
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (l1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
