#include "main.h"
/**
 * _isalpha - to check the alphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabetic character or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
