#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0 as arguement
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number++);
	}
	printf("\n");

	return (0);
}
