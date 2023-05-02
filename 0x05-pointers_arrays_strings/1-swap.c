#include "main.h"
/**
 * swap_int - point of entry
 * @a: integer variable
 * @b: integer variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
