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
		for (i = 1; i <= size; ++i)
		{
			for (space = 1; space <= size; ++space)
			{
				if ((i + space) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
