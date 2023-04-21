#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0 as arguement
 */
int main(void)
{
	char hexletter = 'a';
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (hexletter <= 'f')
	{
		putchar(hexletter);
		hexletter++;
	}
	putchar('\n');

	return (0);
}
