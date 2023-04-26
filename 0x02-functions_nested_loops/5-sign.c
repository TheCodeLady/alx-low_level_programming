#include "main.h"

/**
 * print_sign - point of entry to function
 * @n: the character variable
 *
 * Return: 1 and a sign else 0 and a sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

