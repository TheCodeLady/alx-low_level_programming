#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: 0 as arguement
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
        {
                putchar(upper);
                upper++;
        }
	putchar('\n');

	return (0);
}

