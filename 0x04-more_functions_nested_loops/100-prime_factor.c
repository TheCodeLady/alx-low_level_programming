#include "main.h"
/**
 * prime_factors - function to get prime factors
 * main - point of entry
 * @n: long number
 *
 * Return: 0 on success
 */
void prime_factors(long n)
{
	int a, b, is_prime;

	for (a = 2; a <= n; a++)
	{
		if (n % a == 0)
		{
			is_prime = 1;
			for (b = 2; b <= a / 2; b++)
			{
				if (a % b == 0)
				{
					is_prime = 0;
					break;
				}
			}
			if (is_prime)
			{
				printf("%d ", a);
				n /= a;
				a--;
			}
		}
	}
}

int main(void)
{
	long n = 612852475143;
	
	printf("The prime factors of %ld are: \n", n);
	prime_factors(n);

	return (0);
}
