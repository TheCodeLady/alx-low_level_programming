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
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum i;
		}
		else
		{
			continue;
		}
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
