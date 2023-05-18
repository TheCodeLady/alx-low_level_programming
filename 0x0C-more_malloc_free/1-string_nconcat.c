#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - point of entry
 * @s1: char variable
 * @s2: character variable
 * @n: int variable
 *
 * Return: newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n >= s2)
	{
		concat = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		concat = malloc(sizeof(char) * (len1 + n + 1));
	}
	if (!concat)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	while (i < (len1 + n) && n < len2)
	{
		concat[i++] = s2[j++];
	}
	while (i < (len1 + len2) && n >= len2)
	{
		concat[i++] = s2[j++];
	}
	concat[i] = '\0';
	return (concat);
}
