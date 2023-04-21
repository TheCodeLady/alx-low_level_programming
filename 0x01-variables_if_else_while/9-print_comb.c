#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0 to terminate
 */
int main(void)
{
	int comb = 0;

	while (comb < 10)
	{
		putchar(comb + '0');
		if (comb < 9)
		{
			putchar(',');
			putchar(' ');
		}
		comb++;
	}

	return (0);
}
