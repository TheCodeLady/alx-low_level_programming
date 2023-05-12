#include "main.h"
/**
 * *_strncpy - point of entry
 * @dest: pointer variable 1
 * @src: pointer variable 2
 * @n: integer variable
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
