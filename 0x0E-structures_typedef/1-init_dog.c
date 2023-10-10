#include "main.h"
/**
 * init_dog - funct
 * @d: pointer to struct
 * @name: 2p
 * @age: 3p
 * @owner: 4p
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(d -> name) = name;
(d -> age) = age;
(d -> owner) = owner;
}
