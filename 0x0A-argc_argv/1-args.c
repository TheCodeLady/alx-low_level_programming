#include "main.h"
/**
 * main - point of entry
 * @argc: argument 1 to main
 * @argv: arg2 to main
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	if(argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
