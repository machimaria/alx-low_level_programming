#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 97 && str[index] <= 122))
			index++;
		if (str[index - 1] == 32 ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == 44 ||
				str[index - 1] == 59 ||
				str[index - 1] == 46 ||
				str[index - 1] == 33 ||
				str[index - 1] == 63 ||
				str[index - 1] == 34 ||
				str[index - 1] == 40 ||
				str[index - 1] == 41 ||
				str[index - 1] == 123 ||
				str[index - 1] == 125 ||
				index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}

