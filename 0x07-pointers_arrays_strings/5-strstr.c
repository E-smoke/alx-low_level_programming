#include "main.h"
/**
 * comp - funct
 * @i: 1p
 * @j: 2p
 * @haystack:3p
 * @needle: 4p
 * Return: returns an integer
 */
int comp(int i, int j, char *haystack, char *needle)
{
int c;
if (haystack[i] == needle[j])
{
c = comp(++i, ++j, haystack, needle);
}
if (haystack[i] != needle[j] && needle[j] == '\0')
{
return (1);
}
if (haystack[i] != needle[j])
{
return (0);
}
return c;
}
/**
 * _strstr - funct
 * @haystack: 1p
 * @needle: 2p
 * Return: returns a pointer.
 */
char *_strstr(char *haystack, char *needle)
{
int c;
int i = 0;
int j = 0;
while (haystack[i] != '\0')
{
++i;
}
while (needle[j] != '\0')
{
++j;
}
if (i < j)
{
return (NULL);
}
i = 0;
j = 0;
while (haystack[i] != '\0')
{
c = comp(i, j, haystack, needle);
if (c == 1)
{
return (haystack + i);
}
if (c == 0)
{
++i;
}
}
return (NULL);
}
