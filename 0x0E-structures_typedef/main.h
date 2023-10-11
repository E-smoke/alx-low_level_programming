#ifndef m
#define m
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
void free_dog(dog_t *d);
#endif
