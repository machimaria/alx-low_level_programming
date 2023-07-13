#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include  <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int s, t, add = 0;

	for (s = 1; s < argc; s++)
	{
		for (t = 0; argv[s][t] != '\0'; t++)
		{
			if (!isdigit(argv[s][t]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[s]);
	}
	printf("%d\n", add);
	return (0);
}
