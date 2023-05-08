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
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	if (s[i] == '\0')
	{
		return ('\0');
	}
}
