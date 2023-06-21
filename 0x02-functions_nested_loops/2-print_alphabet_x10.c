#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet in lowercase
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	char b;
	int i;

	for (i = 48; i <= 57; i++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
