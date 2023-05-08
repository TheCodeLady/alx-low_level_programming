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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (c);
		}
		if (s[i] != c)
		{
			return (NULL);
		}
	}
}
