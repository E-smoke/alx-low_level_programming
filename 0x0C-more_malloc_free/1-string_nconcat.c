#include "main.h"
/**
 * string_nconcat - funct
 * @s1: 1p
 * @s2: 2p
 * @n: 3p
 * Return: returns a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int j;
unsigned int c1;
unsigned int c2;
unsigned int ct;
char *ptr;
c1 = 0;
c2 = 0;
if (s1 == NULL)
{
}
else
{
while (s1[c1] != '\0')
{
++c1; }}
if (s2 == NULL)
{
}
else
{
while (s2[c2] != '\0')
{
++c2; }}
if (n > c2)
{
n = c2; }
ct = c1 + n;
ptr = (char *)malloc((ct + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL); }
for (i = 0; i < c1; ++i)
{
ptr[i] = s1[i]; }
for (j = 0; j < n; ++j)
{
ptr[i + j] = s2[j]; }
ptr[ct] = '\0';
return (ptr); }
