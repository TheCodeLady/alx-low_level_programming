#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0
 */
int main(void)
{
	int a, fib = 50;
	long long x = 1, y = 2, z;

	printf("%lld, %lld, ", x, y);
	for (i = 2; i < n; i++)
	{
		z = x + y;
		printf("%lld, ", z);
		x = y;
		y = z;
	}
	printf('\n');

	return (0);
}
