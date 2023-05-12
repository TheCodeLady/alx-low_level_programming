#include "main.h"
/**
 * main - point of entry
 * @argc: argument 1 to main
 * @argv: arg2 to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;
	if(argc > 0)
	{
		for(count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("No arguments supplied");
	}

	return (0);
}
