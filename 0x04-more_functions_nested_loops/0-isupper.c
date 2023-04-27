#include "main.h"
/**
 * _isupper - point of entry
 * @c: integer variable
 *
 * Return: 0 or 1 if condition is met
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
