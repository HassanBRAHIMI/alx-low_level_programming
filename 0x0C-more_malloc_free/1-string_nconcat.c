#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concat two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 *
 * Return: the adress of the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int lengthS1, lengthS2;

	if (s1 == NULL)
		lengthS1 = 0;
	else
		lengthS1 = strlen(s1);

	if (s2 == NULL)
		lengthS2 = 0;
	else
		lengthS2 = strlen(s2);

	if (n > lengthS2)
		n = lengthS2;

	string = (char *) malloc(lengthS1 + n + 1);
	if (string == NULL)
		return (NULL);

	memcpy(string, s1, lengthS1);
	memcpy((string + lengthS1), s2, n);
	string[lengthS1 + n] = '\0';

	return (string);
}
