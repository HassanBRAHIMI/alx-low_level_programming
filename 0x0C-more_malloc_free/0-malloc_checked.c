#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size
 *
 *Return: the addres of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *fresh;

	fresh = malloc(b);
	if (!fresh)
		exit(98);
	return (fresh);
}
