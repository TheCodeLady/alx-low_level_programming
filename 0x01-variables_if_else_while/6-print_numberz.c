#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0 as arguement
 */
int main(void)
{
	int numz = 0;

	while (numz < 10)
	{
		putchar(numz + '0');
		numz++;
	}
	putchar('\n');

	return (0);
}
