#include "main.h"
/**
 * *_strcpy - point of entry
 * @dest: string pointer
 * @src: string pointer
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
