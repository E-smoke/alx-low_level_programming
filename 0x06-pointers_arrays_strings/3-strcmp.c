#include "main.h"
/**
 * _strcmp - compares
 * @s1: first para
 * @s2: second para
 * Return: returns diff
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
++i;
}
return (s1[i] - s2[i]);
}
