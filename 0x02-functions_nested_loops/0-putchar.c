#include "main.h"

/**
 * _putchar - prints _putchar
 *
 * Return: 0
 */
int _putchar();

void printpc()
{
	char str[] = "_putchar\n";
	int i;
	for (i = 0; str[i] != '\0'; i++){
		_putchar(str[i]);
	}

	return (0);
}
