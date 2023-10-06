#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

