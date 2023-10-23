/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer to a memory *iarea
 * @b: constant
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
