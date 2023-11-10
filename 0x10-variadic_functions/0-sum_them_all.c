#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 * @...: the other parameters
 *
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	result = 0;
	for (i = 0; i < n; i++)
		result = result + va_arg(args, int);
	return (result);
}
