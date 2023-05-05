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
	char *dest1 = "";

	while (*dest != '\0')
	{
		dest1 = dest1 + *dest;
		dest++;
	}
	while (*src != '\0')
	{
		dest1 = dest1 + *src;
		src++;
	}

	return (dest1);
}
