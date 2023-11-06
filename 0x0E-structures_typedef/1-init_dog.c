#include "dog.h"
/**
 * init_dog - initialize a varialble of type struct dog
 * @d: a pointer to struct dog
 * @name: the name of the dog
 * @age: his age
 * @owner: his owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
