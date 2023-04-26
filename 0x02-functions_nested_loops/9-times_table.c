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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 9)
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i * j) + '0');
				_putchar('\n');
			}
		}
	}
}
