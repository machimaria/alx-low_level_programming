#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r1 = 0, r2 = 0;

	if (argc == 3)
	{
		r1 = atoi(argv[1]);
		r2 = atoi(argv[2]);
		printf("%d\n", r1 * r2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
