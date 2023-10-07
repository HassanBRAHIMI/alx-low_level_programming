#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	int a = 48;
	int b;

	while (a <= 56)
	{
		b = a + 1;
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (!(a == 56 && b == 57))
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}

	putchar('\n');
	return (0);
}
