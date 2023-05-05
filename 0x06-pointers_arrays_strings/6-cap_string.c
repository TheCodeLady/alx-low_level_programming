#include "main.h"
/**
 * cap_string - point of entry
 * @str: pointer variable
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			if (str[i - 1] == 32 || str[i - 1] == 9 || str[i - 1] == 10 ||
				str[i - 1] == 44 || str[i - 1] == 59 || str[i - 1] == 46 ||
				str[i - 1] == 33 || str[i - 1] == 63 || str[i - 1] == 34 ||
				str[i - 1] == 40 || str[i - 1] == 41 || str[i - 1] == 123 ||
				str[i - 1] == 125)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}

	return (str);
}
