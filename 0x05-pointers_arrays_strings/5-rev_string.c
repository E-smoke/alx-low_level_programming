#include "main.h"

/**
 * rev_string - reverse a string
 * @s: receives the string
 * return: nothing
 */

void rev_string(char *s)
{
int i;
int n = 0;
int j = 0;
while (s[n] != '\0')
{
n++;
}
int temp[n + 1];
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
