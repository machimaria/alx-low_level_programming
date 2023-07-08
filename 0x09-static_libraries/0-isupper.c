#include "main.h"
/**
 * _isupper - check for uppercase letters
 * @c: represents what to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
