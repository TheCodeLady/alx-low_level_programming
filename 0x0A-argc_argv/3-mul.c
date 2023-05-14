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
	if (argc == 3)
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
	printf("Error\n");
	return (1);
}

