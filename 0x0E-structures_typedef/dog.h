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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
