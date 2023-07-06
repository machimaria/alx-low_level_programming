#include "main.h"
#include <stdio.h>
/**
 *sqrt_a - returns the natural square root of a number
 *@a: number
 *@b: number
 *Return: square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
