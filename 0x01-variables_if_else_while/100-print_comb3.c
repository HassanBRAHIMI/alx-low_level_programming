#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	char a = '0';
	char b;

	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (!(a == '8' && b == '9'))
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
