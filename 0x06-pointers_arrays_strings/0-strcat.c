/**
 * _strcat - man strcat
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *kda = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
		*dest = '\0';
	return (kda);
}
