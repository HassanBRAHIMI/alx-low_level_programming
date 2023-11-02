#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 *
 * Return: the adress of the array
 */
int *array_range(int min, int max)
{
	int *range;
	int i;
	int j;

	if (max < min)
		return (NULL);
	j = max - min + 1;
	range = malloc(j * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < j)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
