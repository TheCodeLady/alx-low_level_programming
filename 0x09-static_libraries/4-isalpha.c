#include "main.h"

/**
 * _isalpha - checks for aplhabetic character
 * @c: the character variable
 *
 * Return: returns 1 is alpha or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
