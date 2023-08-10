#include "main.h"
/**
 * get_bit - program that returns the value of a bit
 * at a given index
 * @n: number to check
 * @index: the index
 * Return: 1 0r 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int g;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (g = 0; g < index; g++)
		n = n >> 1;
	return ((n & 1));
}
