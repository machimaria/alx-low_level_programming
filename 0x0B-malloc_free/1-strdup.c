#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter.
* @str: string
* Return: a new pointer or NULL
*/
char *_strdup(char *str)
{
	int f = 0, g = 1;
	char *t;

	if (str == NULL)
		return (NULL);

	while (str[g])
	{
		g++;
	}

	t = malloc((sizeof(char) * g) + 1);

	if (t == NULL)
		return (NULL);

	while (f < g)
	{
		t[f] = str[f];
		f++;
	}

	t[f] = '\0';
	return (t);
}
