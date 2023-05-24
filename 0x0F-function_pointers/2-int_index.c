#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - point of entry
 * @array: pointer variable
 * @size: int variable
 * @cmp: function variable
 *
 * Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
