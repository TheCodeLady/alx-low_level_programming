#include "main.h"
/**
 * *_strncat - point of entry
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer variable
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest1 = dest;

	while (*dest1 != '\0')
	{
		dest1++;
	}
	while (*src < n && *src != '\0')
	{
		*dest1 = *src;
		dest1++;
		src++;
	}

	return (dest);
}
