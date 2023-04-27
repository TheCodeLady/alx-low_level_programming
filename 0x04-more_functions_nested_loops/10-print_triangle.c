#include "main.h"
/**
 * print_triangle - point of entry
 * @size: integer variable
 */
void print_triangle(int size)
{
	int i, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (space = size; space < size + 1; space--)
			{
				_putchar(' ');
			}
		_putchar('#');
		_putchar('\n');
		}
	}
}

