#include "main.h"
#include <unistd.h>
/**
 * print_alphabet  - Entry point
 * Description: print_alphabet in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	char b;

	for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
