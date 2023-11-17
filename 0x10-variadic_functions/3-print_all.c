#include "variadic_functions.h"
/**
 * print_all - print all
 * @format: the format
 * @...: the other arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (!(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			i++;
		}
			switch (format[i])
			{
				case 'c':
				printf("%c" , va_arg(args, int));
				break;
				case 'i':
				printf("%d" , va_arg(args, int));
				break;
				case 'f':
				printf("%f", va_arg(args, double));
				break;
				case 's':
				{
					char *kda = va_arg(args , char *);
					if (kda == NULL)
						kda = "(nil)";
					printf("%s", kda);
					break;
				}
			}
			i++;
	}
	printf("\n");
}
