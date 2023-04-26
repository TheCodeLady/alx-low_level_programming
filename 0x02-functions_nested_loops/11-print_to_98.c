#include "main.h"
/**
 * print_to_98 - point of entry
 * @n: integer arguement
 *
 * Return: 0 as successful
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			if (n > i)
			{
				for (i = n; i >= 98; i--)
				{	
					printf("%d, ", i);
				}
			}
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
