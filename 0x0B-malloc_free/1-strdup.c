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

	while (str[size])
		size++;
	fresh = (char *)malloc(size + 2);
		if (fresh == NULL)
			return (NULL);
	while (i < size)
	{
		fresh[i] = str[i];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
