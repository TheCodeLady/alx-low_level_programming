#include "main.h"
/**
 * leet - point of entry
 * @str: pointer variable
 *
 * Return: char
 */
char *leet(char *str)
{
	int i = 0, j;
	int cap_letters[] = {65, 69, 79, 84, 76};
	int small_letters[] = {97, 101, 111, 116, 108};
	int nums[] = {52, 51, 48, 55, 49};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == cap_letters[j])
			{
				str[i] = nums[j];
			}
			if (str[i] == small_letters[j])
			{
				str[i] = nums[j];
			}
		}
		i++;
	}
	return (str);
}
