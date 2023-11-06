#ifndef DOG
#define DOG

/**
 * struct dog - dog truct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Desceiption: structure description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
