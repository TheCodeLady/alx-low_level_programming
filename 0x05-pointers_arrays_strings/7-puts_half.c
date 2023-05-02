#include "main.h"
/**
 * puts_half - point of entry
 * @str: strig pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int i;

	for (length = 0; str[length] != '\0'; length++)
	{
		length--;
	}
	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	if (length % 2 != 0)
	{
		for (i = ((length - 1) / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
