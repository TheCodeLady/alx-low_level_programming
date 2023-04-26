#include "main.h"

/**
 * main - point of entry
 *
 * Return: 0
 *
 */
int main(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

	return (0);
}
