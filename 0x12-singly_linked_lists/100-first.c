#include "lists.h"
/**
 * printLines - funct
 */
void printLines(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
/**
 * myConstructor - funct
 */
void myConstructor(void) __attribute__((constructor));
void myConstructor(void)
{
printLines();
}
