#include <stdio.h>
__attribute__ ((__constructor__))
/**
 * startup - the startup before main
 *
 * Return: void
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
