#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int sh = 0, x = 0, y = 0, z = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			sh++;
			y++;
		}

		y = 0;
		x++;
	}

	t = malloc((sizeof(char) * sh) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			t[z] = av[x][y];
			z++;
			y++;
		}

		t[z] = '\n';

		y = 0;
		z++;
		x++;
	}

	z++;
	t[z] = '\0';
	return (t);
}
