#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	char b = 97;
	char a = 65;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

