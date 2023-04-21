#include <stdio.h>
/**
 * main - point of entry
 *
 *Return: 0 to terminate
 */
int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');

	return (0);
}
