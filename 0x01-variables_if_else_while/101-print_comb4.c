#include <stdio.c>
/**
 *main - point of entry
 *
 *Return: 0 to terminate
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1; num2 < 10; num2++)
		{
			for (num3 = num2; num3 < 10; num3++)
			{
				if (num1 != num2 && num1 != num3 && num2 != num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num1 == 7 && num2 == 8 && num3 == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
