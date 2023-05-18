#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - point of entry
 * @b: int variable
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
