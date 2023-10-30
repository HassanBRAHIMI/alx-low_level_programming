#include <stdlib.h>
/**
 * _strdup - returns a pointer to a duplicate of the string
 * @str: string
 *
 * Return: a string
 */
char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *fresh;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	fresh = (char *)malloc(size + 1);
		if (fresh == NULL)
			return (NULL);
	while (i < size)
	{
		fresh[i] = str[i];
		i++;
	}
	return (fresh);
}
