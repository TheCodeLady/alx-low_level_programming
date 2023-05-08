#include "main.h"
/**
 * *_strstr - point of entry
 * @haystack: character pointer variable
 * @needle: character pointer variable
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay *nee;

	while (*haystack != '\0')
	{
		hay = haystack;
		nee = needle;
		while (*nee != '\0' && *haystack == *nee)
		{
			haystack++;
			nee++;
		}
		if (!*nee)
		{
			return (hay);
		}
		haystack++;
	}
	return ('\0');
}
