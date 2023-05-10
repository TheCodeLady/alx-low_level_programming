#include "main.h"
/**
 * _pow_recursion - point of entry
 * @x: int variable
 * @y: int variable
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int even_num;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		even_num = _pow_recursion(x, y / 2);
		return (even_num * even_num);
	}
	return (x * _pow_recursion(x, y - 1));
}
