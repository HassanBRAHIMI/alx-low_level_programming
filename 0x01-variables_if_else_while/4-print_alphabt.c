#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		if (a == 'q' || a == 'e')
			a++;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
