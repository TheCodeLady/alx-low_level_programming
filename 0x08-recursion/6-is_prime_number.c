#include "main.h"
/**
 * prime_num - point of entry
 * @n: integer variable
 * @i: integer variable
 *
 * Return: int
 */
int prime_num(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_num(n, i - 1));
}
/**
 * is_prime_number - point of entry
 * @n: integer variable
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, n - 1));
}
