#include "main.h"
#include <stdlib.h>
/**
 * *array_range - point of entry
 * @min: int variable
 * @max: int variable
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr, a, size;

	size = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		ptr[a] = min++;
	}

	return (ptr);
}
