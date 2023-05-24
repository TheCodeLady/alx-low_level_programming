#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - point of entry
 * @name: pointer variable
 * f - function variable
 * @char *: parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
