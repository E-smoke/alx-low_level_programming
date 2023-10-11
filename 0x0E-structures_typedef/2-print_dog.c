#include "main.h"
/**
 * print_dog - funct
 * @d: struct
 * Return: void
 */
void print_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("name: (nil)");
}
else
{
printf("name:%s", d->name);
}
if (d->owner == NULL)
{
printf("owner: (nil)");
}
else
{
printf("owner:%s", d->owner);
}
if (d->age == 0)
{
printf("age: (nil)");
}
else
{
printf("age:%d", d->age);
}
}
