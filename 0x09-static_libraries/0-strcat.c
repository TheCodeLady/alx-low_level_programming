#include "main.h"
/**
 * *_strcat - point of entry
 * @dest: string variable
 * @src: string variable
 *
 * Return: characters
 */
char *_strcat(char *dest, char *src)
{
	char *dest1 = dest;

	while (*dest1 != '\0')
	{
		dest1++;
	}
	while (*src != '\0')
	{
		*dest1 = *src;
		dest1++;
		src++;
	}
	*dest1 = '\0';

	return (dest);
}
