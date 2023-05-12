#include "main.h"

/**
 * _islower - point of entry
 * @c: the character to be checked
 *
 * Return: 1 if lower or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
