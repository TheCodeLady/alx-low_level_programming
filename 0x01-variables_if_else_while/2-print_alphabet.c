#include <stdio.h>
/**
 * main - point of entry into program
 *
 * Return: 0 as parameter is void
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
