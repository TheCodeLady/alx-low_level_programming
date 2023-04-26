#include "main.h"

/**
 * print_last_digit - point of entry
 * @a: value to get last digit off
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (a < 0)
	{
		last_digit = last_digit * -1;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
