#include "main.h"
/**
 * _puts - point of entry
 * @str: strig pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
