#include "main.h"
/**
 * _atoi - point of entry
 * @s: string pointer
 *
 * Return: void
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int sign = 1;

	while (*s++)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			i = (i * 10) + (*s - '0');
		}
		if (i > 0)
		{
			break;
		}
	}

	return (i * sign);
}
