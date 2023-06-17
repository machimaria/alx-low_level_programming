#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: always 0
*/
int main(void)
{
	int a, b;

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			if (b != a)
				putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
		if (a == 56 && b == 57)
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
