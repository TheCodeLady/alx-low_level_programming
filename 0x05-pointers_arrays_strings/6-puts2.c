#include "main.h"
/**
 * puts2 - point of entry
 * @str: character variable
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
