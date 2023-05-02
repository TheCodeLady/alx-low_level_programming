#include "main.h"
/**
 * puts_half - point of entry
 * @str: strig pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	_putchar(length);
	if (length % 2 == 0)
	{
		for (i = length / 2; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
	if (length % 2 != 0)
	{
		for (i = (length - 1) / 2; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
