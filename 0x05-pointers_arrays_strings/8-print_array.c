#include "main.h"
/**
 * _print_array - point of entry
 * @a: int pointer
 * @n: int variable
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = a[0]; i < n; i++)
	{
		printf("%d, \n", a[i]);
	}
}	
