#include "main.h"
#include <stdlib.h>
/**
 * *create_array - point of entry
 * @size: int variable
 * @c: character variable
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
