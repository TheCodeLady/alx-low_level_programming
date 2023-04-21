#include <stdio>
/**
 * main - point of entry
 *
 * Return: 0 as parameter
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z' && letter != 'e' && letter != 'q')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
