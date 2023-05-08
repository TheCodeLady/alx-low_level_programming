#include "main.h"
/**
 * print_diagsums - point of entry
 * @a: int pointer variable
 * @size: int variable
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1))
		{
			sum1 += a[i];
		}
		if (i % (size - 1) && i != 0 && i < ((size * size) - 1))
		{
			sum2 += a[i];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
