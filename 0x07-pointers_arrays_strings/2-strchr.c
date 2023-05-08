#include "main.h"
/**
 * *_strchr - point of entry
 * @s: pointer variable
 * @c: char variable
 *
 * Return: a string or null
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
	{
		return (s);
	}

	return ('\0');
}
