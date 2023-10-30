#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the char
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *fresh;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	fresh = (char *)malloc(size);
	if (fresh = NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		fresh[i] = c;
	return (fresh);
}
