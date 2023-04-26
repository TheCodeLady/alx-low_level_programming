#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int sum;

	for (i = 1; i < 1024; i++)
	{
		sum = 0;
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
