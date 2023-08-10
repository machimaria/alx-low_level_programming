#include "main.h"
/**
 * get_endianness - program that checks the endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int g = 1;
	int big_or_little;

	big_or_little = (int)  (((char *)&g)[0]);
	return (big_or_little);
}
