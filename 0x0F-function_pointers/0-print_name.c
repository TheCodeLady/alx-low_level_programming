#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - point of entry
 * @name: pointer variable
 * @f: function variable
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
