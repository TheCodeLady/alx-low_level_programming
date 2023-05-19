#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - point of entry
 * @ptr: pointer variable
 * @old_size: int variable
 * @new_size: int variable
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *tmp;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	tmp = ptr;
	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = tmp[i];
	}
	free(ptr);

	return (new_ptr);
}
