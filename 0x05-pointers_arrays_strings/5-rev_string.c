#include "main.h"
/**
 * rev_string - point of entry
 * @s: character variable
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	len--;
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
	}
}
