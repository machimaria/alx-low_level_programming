#include "main.h"
/**
 * flip_bits - returns the number of bits
 * you need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numb;
	unsigned long int fig;

	numb = n ^ m;
	for (fig = 0; numb > 0;)
	{
		if ((numb & 1) == 1)
			fig++;
		numb = numb >> 1;
	}
	return (fig);
}
