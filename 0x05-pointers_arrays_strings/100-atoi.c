#include "main.h"
/**
 * _atoi - string to integer
 * @s: a parameter
 * Return: returns an integer
 */
int _atoi(char *s)
{
int i;
int m;
int value = 0;
int mult = 1;
int len = 0;
int n = 0;
while (s[len] != '\0')
{
++len;
}
if (len == 0)
{
return (0);
}
if (s[0] == '-')
{
++n;
}
for (i = n; i < len; ++i)
{
mult = 1;
for (m = 1; m <= (len - (i + 1)); ++m)
{
mult = mult * 10;
}
value = value + ((s[i] - '0') * mult);
}
if (s[0] == '-')
{
value = -1 * value;
}
return (value);
}

