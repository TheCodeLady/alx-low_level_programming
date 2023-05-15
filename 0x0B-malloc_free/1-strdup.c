#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - point of entry
 * @str: character pointer variable
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
	{
		return (NULL);
	}
	while ((copy[i] = str[i]) != '\0')
	{
		i++;
	}

	return (copy);
	free(copy);
}
