#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1; num2 < 10; num2++)
		{
			if (num1 != num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(',');
				putchar(' ');
				if (num1 == 8 && num2 == 9)
				{
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
