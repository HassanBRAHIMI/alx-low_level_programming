#include "main.h"
/**
 * print_alphabet - entry point
 */
void print_alphabet(void)
{
	char a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
