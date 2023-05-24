#include "3-calc.h"
/**
 * main - point of entry
 * @argc: number of arguments
 * @argv:array of arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int a1, a2, result;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '%' || op == '/') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a1, a2);
	printf("%d\n", result);

	return (0);
}
