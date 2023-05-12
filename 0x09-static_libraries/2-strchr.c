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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
