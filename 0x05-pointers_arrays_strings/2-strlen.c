#include "main.h"
/**
 * _strlen - point of entry
 * @s: charater variable
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int total = 0;

	while (*s != '\0')	
	{
		total++;
		s++;
	}

	return (total);
}
