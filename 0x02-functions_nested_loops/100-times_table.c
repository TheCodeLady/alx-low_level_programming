#include "main.h"
/**
 * print_times_table - point of entry
 * @n: arguement
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				if (j != 0 && k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				if (j != 0)
				{
					if (k >= 10 && k <= 99)
					{
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
				}
				if (j != 0 && k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar(((k - 100) / 10) + '0');
					_putchar(((k - 100) % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	if (n = 0)
	{
		_putchar(0 + '0');
		_putchar('\n');
	}
}
