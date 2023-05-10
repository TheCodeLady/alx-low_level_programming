#include "main.h"
#include "main.h"
/**
 * nat_sqrroot - point of entry
 * @n: integer variable
 * @i: integer variable
 *
 * Return: int
 */
int nat_sqrroot(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (nat_sqrroot(n, i + 1));
}
/**
 * _sqrt_recursion - point of entry
 * @n: pointer variable
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	return (nat_sqrroot(n, 0));
}
