#include "variadic_functions.h"
/**
 * sum_them_all - point of entry
 * @n: constant int variable
 *
 * Return: 0 on success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(list, int);
	}
	va_end(list);

	return (total);
}
