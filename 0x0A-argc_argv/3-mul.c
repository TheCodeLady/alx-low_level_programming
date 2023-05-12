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
	int i = 0, r = 1;
	if(argc == 3)
	{
		while(i < 3)
		{
			r = r * argv[i];
			i++;
		}
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

