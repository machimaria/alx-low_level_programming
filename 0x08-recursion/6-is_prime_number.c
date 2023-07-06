#include "main.h"
#include <stdio.h>
/**
 * prime_a - calculate if its a prime
 * @a: input
 * @b: divisor
 * Return: (0)
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 * Return: 1 if prime number or 0 if not
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
