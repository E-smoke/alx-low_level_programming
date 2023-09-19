#include "main.h"

/**
 * _strlen - gives string length
 * @s: receives the string
 * Return: string length
 */

int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}

/**
 * rev_string - reverse a string
 * @s: receives the string
 * return: nothing
 */

void rev_string(char *s)
{
int i;
int j = 0;
int n = 0;
char temp[_strlen(s)];
while (s[n] != '\0')
{
n++;
}
for (i = (_strlen(s) - 1); i >= 0; --i)
{
temp[j] = s[i];
j++;
}
for (i = 0; i < _strlen(s); ++i)
{
s[i] = temp[i];
}
}
