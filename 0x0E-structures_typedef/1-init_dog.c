#include "main.h"
/**
 * init_dog - funct
 * @d: pointer to struct
 * @name: 2p
 * @age: 3p
 * @owner: 4p
 * Return: void
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
(d->name) = strdup(name);
(d->age) = age;
(d->owner) = strdup(owner);
}
