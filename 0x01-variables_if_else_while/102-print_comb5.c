#include <stdio.h>
/**
 * main - Entry point
 * Descripotion: prints all possible combinations of two two-digit numbers
 * Return: 0
*/
int main(void)
{
	int n, x;
	int a, b, c, d;

	for (n = 0; n < 100; n++)
	{
		a = n / 10;
			b = n % 10;
			for (x = 0; x < 100; x++)
			{
				c = x / 10;
				d = x % 10;
				if (a < c || (a == c && b < d))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(32);
					putchar(c + '0');
					putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
				}
			}
	}
	putchar(10);
	return (0);
}
