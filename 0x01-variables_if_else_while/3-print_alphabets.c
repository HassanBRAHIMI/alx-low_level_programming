#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	char a = 65;

	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

