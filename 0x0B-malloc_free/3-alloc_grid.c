#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - point of entry
 * @width: int variable
 * @height: int variable
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int *) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (a = 0; a <= i; a++)
			{
				free(array[a]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (a = 0; a < width; a++)
		{
			array[i][a] = 0;
		}
	}

	return (array);
}
