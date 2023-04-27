#include "main.h"
/**
 * print_numbers - point of entry
 *
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
