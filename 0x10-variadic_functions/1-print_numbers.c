#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n : number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (!separator)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
		printf("\n");
	}
	else
	{
	for (i = 1; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}
