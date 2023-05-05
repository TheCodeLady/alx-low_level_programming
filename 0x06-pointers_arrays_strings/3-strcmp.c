#include "main.h"
/**
 * _strcmp - point of entry
 * @s1: pointer variable 1
 * @s2: pointer variable 2
 *
 * Return: the result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		if (s1[i] == s2[i])
		{
			result = s1[i] - s2[i];
		}
		i++;
	}

	return (result);
}
