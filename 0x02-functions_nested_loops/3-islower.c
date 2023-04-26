#include "main.h"

/**
 * _islower - point of entry
 *
 * Return: 0 on success
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
