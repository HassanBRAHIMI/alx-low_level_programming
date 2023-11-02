#include <stdlib.h>
#include <string.h>
/**
 * _calloc - man calloc
 * @nmemb: number of elements
 * @size: size of the elements
 *
 *Return: the adress of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *fresh;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	fresh = malloc(nmemb * size);
	if (!fresh)
		return (NULL);
	bzero(fresh, nmemb * size);
	return (fresh);
}
