#include "main.h"
/**
 * print_diagonal - point of entry
 * @n: integer variable
 */
void print_diagonal(int n)
{
	int i; 

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
