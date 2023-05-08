#include "main.h"
/**
 * *_memcpy - point of entry
 * @dest: char pointer
 * @src: char pointer
 * @n: int variable
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest_ptr++ = src_ptr++;
	}

	return (dest);
}
