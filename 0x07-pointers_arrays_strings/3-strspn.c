#include "main.h"
/**
 * _strspn - point of entry
 * @s: string variable
 * @accept: string variable
 *
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;
	a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		c = 1;
		while (accpet[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 0;
				break;
			}
			b++
		}
		if (c == 1)
		{
			break;
		}
		a++;
	}
	return (a);
}
