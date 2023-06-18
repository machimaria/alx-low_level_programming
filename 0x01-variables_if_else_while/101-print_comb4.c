#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 * Return: 0
*/
int main(void)
{
	int a, b, c;

	for (a = 48; a < 56; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				if (c != b && b != a)
					putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (a == 55 && b == 56 && c == 57)
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}

