#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0 as arguement
 */
int main(void)
{
	char hexletter = 'a';

	while (hexletter <= 'f')
	{
		putchar(hexletter);
		hexletter++;
	}
	putchar('\n');

	return (0);
}
