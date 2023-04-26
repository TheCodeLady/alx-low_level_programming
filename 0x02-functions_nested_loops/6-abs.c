#include "main.h"

/**
 * _abs - to get the abs of any input
 * @int - value type of parameter
 *
 * Return: 0 as success
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n
	}
	_putchar(n);

	return (0);
}
