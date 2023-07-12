#include "main.h"
#include <stdio.h>
/**
 * main - prints all contents
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}

	return (0);
}
