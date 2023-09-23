#include "main.h"
/**
 * leet - leets
 * @in: para
 * Return: returns in
 */
char *leet(char *in)
{
int i;
int n;
int c = 0;
char s[6] = "aeotl";
char s1[6] = "AEOTL";
char num[6] = "43071";
while (in[c] != '\0')
{
++c;
}for (n = 0; n < c; ++n)
{
for(i = 0; i < 6; ++i)
{
if((in[n] == s[i]) || (in[n] == s1[i]))
{
in[n] = num[i];
}
}
}
return (in);
}
