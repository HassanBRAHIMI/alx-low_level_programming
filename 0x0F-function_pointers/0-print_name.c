/**
 * print_name - prints a name
 * @name: the name
 * @f: the adress of the func
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
