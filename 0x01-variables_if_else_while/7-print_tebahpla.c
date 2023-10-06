#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	char a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}

