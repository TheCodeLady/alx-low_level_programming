#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0
 */
int main(void)
{
	int i, fib = 50;
	long x = 1, y = 2, z;

	printf("%ld, %ld, ", x, y);
	for (i = 2; i < fib; i++)
	{
		z = x + y;
		printf("%ld, ", z);
		x = y;
		y = z;
	}
	printf('\n');

	return (0);
}
