#include "main.h"
/**
 * reverse_array - point of entry
 * @a: pointer variable
 * @n: integer variable
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i, element;

	i = 0;
	element = n - 1;

	while (i < element)
	{
		tmp = a[i];
		a[i] = a[element];
		a[element] = tmp;
		i++;
		element--;
	}
}
