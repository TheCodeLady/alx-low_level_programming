#include "main.h"
/**
 * print_times_table
 * @n: arguement
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					if (j == 0)
					{
						_putchar('0');
					}
					if (j != 0)
					{
						_putchar(' ');
						_putchar(k + '0');
					}
					if (j != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					if (j !=9)
					{
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
