#include "variadic_functions.h"
/**
 * print_numbers - point of entry
 * @separator: pointer variable
 * @n: int variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!seperator)
		{
			printf("%d", va_arg(args, int));
		}
		else if (seperator && i == 0)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%s%d", seperator, va_arg(args, int));
		}
	}
	va_end(args);
	printf("\n");
}
