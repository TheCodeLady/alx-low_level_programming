#include "main.h"
#include <stdlib.h>
/**
 * main - point of entry
 * @argc: argument 1 to main
 * @argv: arg2 to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	i = atoi(argv[1]);
	c += i / 25;
	i = i % 25;
	c += i / 10;
	i = i % 10;
	c += i / 5;
	i = i % 5;
	c += i / 2;
	i = i % 2;
	c += i / 1;

	printf("%d\n", c);
	return (0);
}
