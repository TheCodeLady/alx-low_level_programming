#include "main.h"
/**
 * times_table - point of entry
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}
			}
			else
			{
				_putchar(k + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}
			}

		}
	}
}
