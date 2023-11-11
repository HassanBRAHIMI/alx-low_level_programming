#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the separator between strings
 * @n: the number of strings
 * @...: the other arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
