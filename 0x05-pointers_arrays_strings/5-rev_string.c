#include "main.h"

/**
 * _strlen - gives string length
 * @s: receives the string
 * Return: string length
 */

int _strlen(char *s)
{
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
char temp[_strlen(s)];
int n = 0;
int j = 0;
while (s[n] != '\0')
{
n++;
}
for (i = (n - 1); i >= 0; --i)
{
temp[j] = s[i];
j++;
}
for (i = 0; i < n; ++i)
{
s[i] = temp[i];
}
}
