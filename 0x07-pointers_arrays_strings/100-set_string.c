#include "main.h"
/**
 * set_string - point of entry
 * @s: character point variable
 * @to: character pointer variable
 *
 * Return: 0
 */
void set_string(char **s, char *to)
{
	int i;
	for (i = 0; to[i] != '\0'; i++)
	{
		*s[i] = to[i];
	}
	*s[i] = '\0';
}
