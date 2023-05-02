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

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
