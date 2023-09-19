#include "main.h"

/**
 * _strlen - gives length of a string.
 * @s: takes in the string.
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
++n;
}
return (n);
}
