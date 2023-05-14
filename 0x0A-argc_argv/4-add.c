#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - point of entry
 * @argc: argument 1 to main
 * @argv: arg2 to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j, k;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k]; k++)
		{
			if (isdigit(argv[j][k]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		i += atoi(argv[j]);
	}
	printf("%d\n", i);
	return (0);
}
